
// **********call backhell*******************************
// setTimeout(function(){
//     console.log("hi");
//     setTimeout(function(){
//         console.log("hello");
//         setTimeout(function(){
//             console.log("hello there")
//         },5000);
//     },3000);
// },1000);
// console.log("hello from outside")

//*************PROMISIFIED BASED APPROACH*********** */
// PROMISE CHAINNG
// function setTimeoutPromisified(duration){
//     return new Promise(function(resolve){
//         setTimeout(resolve,duration);
//     });
// }
// setTimeoutPromisified(1000).then(function(){
//     console.log("hi");
//     setTimeoutPromisified(3000).then(function(){
//         console.log("hi there");
//         setTimeoutPromisified(5000).then(function(){
//             console.log("hello there");
//         });
//     });
// });


//****************ASYNC AWAIT SYNTAX******************************* */

// function setTimeoutPromisified(duration){
//     return new Promise(function(resolve){
//         setTimeout(resolve,duration);
//     });
// }

// async function solve(){
//     await setTimeoutPromisified(1000);
//     console.log("hi");
//     await setTimeoutPromisified(3000);
//     console.log("hello");
//     await setTimeoutPromisified(5000);
//     console.log("hi there");
// }
// solve();

// console.log("after solve functinon");


// *****************************************************

const fs = require("fs");
function readfilePromisified(filePath,cb){
    return new Promise(function(resolve){
        fs.readFile(filePath,"utf-8",function(err,data){
            data = data.trim();
            fs.writeFile(filePath,data,function(){
                resolve();
            });  
        });
    });
}

async function main() {
    await readfilePromisified("a.txt");
    console.log("hello");
}
main();