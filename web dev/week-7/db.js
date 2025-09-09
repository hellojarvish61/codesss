const mongoose = require("mongoose");
const Schema = mongoose.Schema;

const User = new Schema({
    email : String,
    password : String,
    name : String
});

const Todo = new Schema({
    title : String,
    userId : Schema.Types.ObjectId   // ✅ FIXED HERE
});

const UserModel = mongoose.model("users", User);
const TodoModel = mongoose.model("todos", Todo);

module.exports = {
    UserModel,
    TodoModel
};
