 
 

// write a code that 
//  1 . logs hi after 1 second
//  2. logs hello 3 second after step 1 
//  3 . logs hello there 5 second after step 1




// function setTimeoutPromisified(duration){
//     return new Promise(function(resolve){
//         setTimeout(resolve,duration);
//     });
// }
// this is promise chainings
// setTimeoutPromisified(1000).then(function(){
//     console.log("hi");
//     setTimeoutPromisified(3000).then(function(){
//         console.log("hello");
//         setTimeoutPromisified(5000).then(function(){
//             console.log("hi there");
//         })
//     })
// });







// this is using callback but not callback hell
// function callback(){
//     console.log("hi")
// }
// setTimeout(callback,1000);



// this is formed callback hell and we doesnot pass name of the function thats why it is anonymous function. removing function name make a anonymous function 

// setTimeout(function(){
//     console.log("hi")
//     setTimeout(function(){
//         console.log("hello");
//         setTimeout(function(){
//             console.log("hello there");
//         },5000);
//     },3000);
// },1000)




// async/ await
// it is a synatical superior but use promise under the hod
// function setTimeoutPromisified(duration){
//     return new Promise(function(resolve){
//         setTimeout(resolve,duration);
//     })
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




// now we use promisified vesion of fs.readfile
// this is correct but in this code we would not do any think for the error file but if error file occur 
// const fs = require("fs");
// function readfileProsmisied(){
//     return new Promise(function(resolve,reject){
//     fs.readFile("a.txt","utf-8",function(err,data){
//         if(err){
//             reject("file is not found")
//         }else{
//             resolve(data);
//         }
//         })
//     })
// }

// readfileProsmisied().then(function(data){
//     console.log("file has been read" + " " + data) 
// }).catch(function(err){
//     console.log(err);
// })




// chatgpt

const fs = require("fs");

function readfileProsmisied(filename){
    return new Promise(function(resolve , reject){
        fs.readFile(filename,"utf-8",function(err,data){
            if(err){
                reject(err);
            }else{
                resolve(data);
            }
        });
    });
}

async function solve() {
    try{
        const data = await readfileProsmisied("a.txt");
        console.log("file has been read: ");
        console.log(data);
    }catch(err){
        console.log("error reading file: ");
    }
}
solve();



// this code is simlilar as previous but in this code we use arrow function 

const fs = require("fs");

function readfilePromisified(filename) {
    return new Promise((resolve, reject) => {
        fs.readFile(filename, "utf-8", (err, data) => {
            if (err) {
                reject(err); // Reject the promise if there's an error
            } else {
                resolve(data); // Resolve the promise with the file data
            }
        });
    });
}

async function solve() {
    try {
        const data = await readfilePromisified("a.txt"); // Await the promise
        console.log("File has been read:");
        console.log(data); // Output the file contents
    } catch (err) {
        console.error("Error reading file:", err.message);
    }
}

solve();

