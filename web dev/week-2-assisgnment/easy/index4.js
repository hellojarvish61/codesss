// Write to a file
// Using the fs library again, try to write to the contents of a file. You can use the fs library to as a black box, the goal is to understand async tasks.



// const fs = require ("fs")
// const content = " hello jarvish my name is mohit ranjan i am btech 3rd sem student"

// fs.writeFile('output.txt',content,'utf-8',(err)=>{
//     if(err){
//         console.error("an error occured while writing to the file",err);
//         return;
//     }
//     console.log("file has been written succesfully");
// });





// // code using fs.promise with async/ await

// const fs = require('fs').promises;

// async function writeToFile(filename,content){
//     try{
//         await fs.writeFile(filename,content,'utf-8');
//         console.log('file has been written succesfully');
//     }
//     catch(error){
//         console.error('error writing to file: ',error);
//     }
// }
// writeToFile('bankai.txt','hello world!');




// writing and then reading a file

const fs = require('fs').promises;

async function writeAndReadFile(){
    try {
        await fs.writeFile('text.txt','this is async example','utf-8');
        console.log("file wriiten succesfully");

        const data  = await fs.readFile('text.txt','utf-8');
        console.log('file content:',data);
    }
    catch(error){
        console.error('error',error);
    }
}
writeAndReadFile();