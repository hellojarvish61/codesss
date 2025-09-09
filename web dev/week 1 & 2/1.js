// function sum(a,b){
//     return a+b;
// }
// let ans = sum(2,3)
// console.log(ans);


// synchronous javascript

// function sum(n){
//     let ans = 0
//     for(let i = 0;i<=n;i++){
//         ans = ans + i;
//     }
//     return ans;
// }
// const ans = sum(10);
// console.log(ans);




// const fs = require("fs");

// const contents = fs.readFileSync("a.txt", "utf-8");
// console.log(contents);

// function sum(a, b) {
//     return a + b;
//   }
  
//   function multiply(a, b) {
//     return a * b;
//   }
  
//   function subtract(a, b) {
//     return a - b;
//   }
  
//   function divide(a, b) {
//     return a / b;
//   }
  
//   function doOperation(a, b, op) {
//     let val = op(a, b);
//     return val;
//   }

// console.log(doOperation(1, 2, divide));

  // SYNCHROUSLY


    // const fs = require("fs");

    // const contents = fs.readFileSync("a.txt", "utf-8");
    // console.log(contents);

    // SYNCHORNOUSLY WRITTEN CODE

    // const fs = require("fs");
    // const contents = fs.readFileSync("a.txt","utf-8");
    // console.log(contents);

    // const contents2 = fs.readFileSync("b.txt","utf-8");
    // console.log(contents2);


    // ASYNCHORNOUSLY FUNCTION 

// const fs = require("fs");

// function read(err,data){
// console.log(data);
// }
// const contents = fs.readFileSync("a.txt","utf-8");
// console.log(contents);

// const contents2 = fs.readFileSync("b.txt","utf-8");
// console.log(contents2);


      // ASYNCHRONOSULY 
// const fs = require("fs");
// function read(err,data){
// console.log(data);
// }
// fs.readFileSync("b.txt","utf-8");// asynchornously
// fs.readFileSync("a.txt","utf-8");// asynchornously
// console.log("hello");



// another way to write asynchronos code

// const fs = require("fs");
// function read(err,data){
//   if(err){
//     console.log("file not found")
//   }else{
//     console.log(data);
//   }
// }
// fs.readFileSync("b.txt","utf-8");// asynchornously
// fs.readFileSync("a.txt","utf-8");// asynchornously
// console.log("hello");

    // timeouts

    // function timeout(){
    //   console.log("click the button");
    // }
    // console.log("hi");

    // setTimeout(timeout,15000);
    // console.log("welcome");






    

    function timeout(){
      console.log("click the button");
    }
    console.log("hello");

    setTimeout(timeout,10000);

    console.log(welcome in loupe);

    let c = 0;
    for(let i = 0;i<20;i++){
      c = c +1;
    }
    console.log("loop complete hogya");


    // hello 
    // welocome in loupe
    // loop complte hogya
    // click the button

    // loop complte is cpu intensive task and click button is i/o intensive task thats
    // why loop complete print first.

    
  