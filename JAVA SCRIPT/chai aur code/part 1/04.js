// data types


// primitives // pass by value 
// 7 types : string , number , bool ,null, undefined ,symbol, bigInt

// non primitive  // pass by refrence
// array ,object ,functions

const id = Symbol("123");
const anotherId = Symbol("123");

console.log(id===anotherId); // false


let myObj ={
    name :"mohit",
    age: 22,
}

