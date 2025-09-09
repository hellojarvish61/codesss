 // function random (resolve){ // resolve is also funcntion

// }

// // creating a promise
// let p = new Promise(random);


// // using a promise
// // using the eventual value returned by the promise
// function callback(){
//     console.log("promise succeded");
// }
// p.then(callback);











// function random(resolve){   // resolve is also a function
//     setTimeout(resolve,3000);
// }
// let p = new Promise(random);



// // using the promise value
// function callback(){
//     console.log("promise succeded");
// }

// p.then(callback);






















// promisifed version of readfile 

// const fs = require("fs");

// function readTheFile(sendFinalVlalueHere){
//     fs.readFile("a.txt","utf-8",function(err,data){
//         sendFinalVlalueHere(data);
//     })
// }
// function readFile(fileName){
//     return new Promise(readTheFile);
// }
// const p = readFile();
// function callback(contents){
//     console.log(contents);
// }
// p.then(callback)


// writing own promise class

// class Promise2{
//     constructor(fn){
//         function afterDone(){
//             this.resolve();
//         }
//         fn(afterDone)
//     }
//     then(callback){
//         this.resolve = callback;
//     }
// }
// function readtheFile(resolve){
//     setTimeout(function(){
//         console.log("callback based setTimeout completed");
//     },3000);
// }
// function setTimeoutPromisified(){
//     return new Promise2(readtheFile)
// }
// let p = setTimeoutPromisified();
// function callback(){
//     console.log("callback has been called");
// }
// p.then(callback);





// function doAsyncOp(resolve){
//     setTimeout (resolve,3000);
// }

// const p = new Promise(doAsyncOp)

// function callback(){
//     console.log("3 seconds have passed");
// }
// p.then(callback)




function setTimeoutPromisified(time){
    return new Promise(function(resolve){
        setTimeout(resolve,time);
    })
}
function callback(){
    console.log("time has passed")
}
const p = setTimeoutPromisified(10000)
p.then(callback);