// array push pop 

// array shift unshift

let fruits = ["apple","mango","grapes"];
// console.log(fruits);
// fruits.push("banana");  // push
// console.log(fruits);
// let poppedFruits= fruits.pop();
// console.log(fruits);
// console.log("popped fruits is",poppedFruits);

// unshift
fruits.unshift("banana");
fruits.unshift("myfruits");
console.log("fruits");

// shift
let removedFruit = fruits.shift();
console.log(fruits);
console.log("removed fruits is ", removedFruit);

// push pop is fast as compare to shift unshift