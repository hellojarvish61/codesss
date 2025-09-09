const fs = require('fs');
const file = 'todos.json';

function loadTodos() {
  if (!fs.existsSync(file)) {
    return [];
  }

  const data = fs.readFileSync(file, 'utf8');
  return JSON.parse(data);
}

function saveTodos(todos) {
  fs.writeFileSync(file, JSON.stringify(todos, null, 2));
}

function addTodo(task) {
  var todos = loadTodos();
  todos.push({ task: task, done: false });
  saveTodos(todos);
  console.log("✅ Task added:", task);
}

function listTodos() {
  var todos = loadTodos();

  if (todos.length === 0) {
    console.log("📭 No tasks found.");
    return;
  }

  todos.forEach(function(todo, index) {
    var status = todo.done ? "✅" : "🕒";
    console.log((index + 1) + ". " + status + " " + todo.task);
  });
}

function markDone(index) {
  var todos = loadTodos();

  if (index < 1 || index > todos.length) {
    console.log("❌ Invalid task number.");
    return;
  }

  todos[index - 1].done = true;
  saveTodos(todos);
  console.log("✔️ Task marked done:", todos[index - 1].task);
}

function deleteTodo(index) {
  var todos = loadTodos();

  if (index < 1 || index > todos.length) {
    console.log("❌ Invalid task number.");
    return;
  }

  var removed = todos.splice(index - 1, 1);
  saveTodos(todos);
  console.log("🗑️ Task deleted:", removed[0].task);
}

var command = process.argv[2];
var argument = process.argv.slice(3);

if (command === "add") {
  addTodo(argument.join(" "));
}
else if (command === "list") {
  listTodos();
}
else if (command === "done") {
  markDone(parseInt(argument[0]));
}
else if (command === "delete") {
  deleteTodo(parseInt(argument[0]));
}
else {
  console.log("📌 Commands:");
  console.log("  node todo.js add \"your task\"");
  console.log("  node todo.js list");
  console.log("  node todo.js done <task number>");
  console.log("  node todo.js delete <task number>");
}
