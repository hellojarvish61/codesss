// promisified version of settimeout

const { fileURLToPath } = require('url');

function setTimeoutPromisified(ms){
    // return new Promise(function (resolve){
    //     setTimeout(resolve,ms);
    // })
    return new Promise((resolve)=>setTimeout(resolve,ms));
}

async function runWithDelay(){
    try{
    console.log('task 1');
    await setTimeoutPromisified (2000);
    callbackify();
}catch(error){
    console.error(error);
}
}
runWithDelay();





// promisified version of settimeout
function setTimeoutPromisified(ms) {
    return new Promise(resolve => setTimeout(resolve, ms));
  }
  
  function callback() {
      console.log("3 seconds have passed");
  }
  
  setTimeoutPromisified(3000).then(callback) 






// normal callback approch of the set timeout version

  function setTimeoutCallback(ms, callback) {
    // Traditional setTimeout with a callback
    setTimeout(callback, ms);
  }
  
  function callback() {
    console.log("3 seconds have passed");
  }
  
  // Calling the function with a 3-second delay
  setTimeoutCallback(3000, callback);






// promisified version of fs.readfile

const fs = require('fs').promises;

async function readfilePromisified(filename,encoding ='utf-8'){
  try{
    const data  = await fs.readFile(filePath,encoding);
    return data;
  }catch (error){
    console.error("error");
  }
}
(async function main() {
  const filePath = 'example.txt'; // Replace with your file name

  try {
    console.log(`Reading file: ${filePath}`);
    const data = await readFilePromisified(filePath); // Reading file content
    console.log('File Content:\n', data); // Displaying file content
  } catch (error) {
    console.error(`Error reading file '${filePath}':`, error.message); // Handling errors
  }
})();







// Normal Promisified Version of fs.readFile
const fs = require('fs'); // Importing the standard fs module

function readFilePromisified(filePath, encoding = 'utf-8') {
  return new Promise((resolve, reject) => {
    fs.readFile(filePath, encoding, (err, data) => {
      if (err) {
        reject(err); // Rejecting the promise if an error occurs
      } else {
        resolve(data); // Resolving the promise with the file content
      }
    });
  });
}

// Example Usage
readFilePromisified('example.txt') // Replace 'example.txt' with your file name
  .then(data => {
    console.log('File Content:\n', data); // Displaying the file content
  })
  .catch(error => {
    console.error('Error reading file:', error.message); // Handling errors
  });







// Normal fs.readFile without Promises
const fs = require('fs'); // Importing the standard fs module

fs.readFile('example.txt', 'utf-8', (err, data) => { // Replace 'example.txt' with your file name
  if (err) {
    console.error('Error reading file:', err.message); // Handling errors
    return;
  }
  console.log('File Content:\n', data); // Displaying the file content
});
