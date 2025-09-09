// const chalk = require("chalk");
// console.log(chalk);
// function sum (a,b){
//     return a + b;
// }
// console.log(sum(1,2));



// write a code for a read file
// const fs = require('fs');
// function main (fileName){
//     fs.readFile(fileName,"utf-8",function(err,data){
//         let total = 0;
//         for(let i = 0 ;i<data.length;i++){
//             if(data[i] == " "){
//                 total++;
//             }
//         }
//         console.log(total);
//     })
// }
// main("a.txt");



// making a cli like function without using cli
// const fs = require("fs");

// function main(fileName) {
//     fs.readFile(fileName, "utf-8", function (err, data) {
//         if (err) {
//             console.error("Error reading file:", err.message);
//             return;
//         }
//         let total = 0;
//         for (let i = 0; i < data.length; i++) {
//             if (data[i] === " ") {
//                 total++;
//             }
//         }
//         console.log(total + 1);
//     });
// }

// main(process.argv[2]);





// using commander library

const fs = require('fs');
const { Command } = require('commander');
const program = new Command();
program
  .name('File releted cli')
  .description('CLI helps to count the number of words in files')
  .version('0.8.0');

  program.command('count')
  .description('count the number of words in a file')
  .argument('<file>', 'file to count')
  .action((file) => {
    fs.readFile(file,'utf-8',(err,data)=>{
      if(err){
        console.log(err);
      }else{
        let words = 0;
        for(let i = 0;i<data.length;i++){
          if(data[i]===" "){
            words++;
          }
        }
        console.log(`there are ${words + 1} words in ${file}`);
      }
    })
  });





  program.command('count_lines')
  .description('count the number of line in a file')
  .argument('<file>', 'file to count')
  .action((file) => {
    fs.readFile(file,'utf-8',(err,data)=>{
      if(err){
        console.log(err);
      }else{
        let words = 0;
        for(let i = 0;i<data.length;i++){
          if(data[i]===" \n"){
            words++;
          }
        }
        console.log(`there are ${words + 1} words in ${file}`);
      }
    })
  });

program.parse();