// const chalk = require("chalk");
// console.log(chalk);
// function sum (a,b){
//     return a + b;
// }
// console.log(sum(1,2));



// write a code for a read file and print the number of words
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



// using commander library

// const fs = require('fs');
// const {Command} = require('commander');
// const program = new Commander();

// program
//   .name('string-util')
//   .description('CLI to some JavaScript string utilities')
//   .version('0.8.0');

//   program.command('split')
//   .description('Split a string into substrings and display as an array')
//   .argument('<string>', 'string to split')
//   .option('--first', 'display just the first substring')
//   .option('-s, --separator <char>', 'separator character', ',')
//   .action((str, options) => {
//     const limit = options.first ? 1 : undefined;
//     console.log(str.split(options.separator, limit));
//   });

// program.parse();




const fs = require('fs');
const { Command } = require('commander');
const program = new Command();

program
  .name('counter')
  .description('CLI to do file based tasks')
  .version('0.8.0');

program.command('count')
  .description('Count the number of lines in a file')
  .argument('<file>', 'file to count')
  .action((file) => {
    fs.readFile(file, 'utf8', (err, data) => {
      if (err) {
        console.log(err);
      } else {
        let words = 0;
        for(let i = 0;i<data.length;i++){
          if(data[i]===" "){
            words++;
          }
        }
        console.log(`There are ${words + 1} lines in ${file}`);
      }
    });
  });


  program.command('count_sentence')
  .description('Count the number of lines in a file')
  .argument('<file>', 'file to count')
  .action((file) => {
    fs.readFile(file, 'utf8', (err, data) => {
      if (err) {
        console.log(err);
      } else {
        let words = 0;
        for(let i = 0;i<data.length;i++){
          if(data[i]==="\n "){
            words++;
          }
        }
        console.log(`There are ${words} lines in ${file}`);
      }
    });
  });

program.parse();