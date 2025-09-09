// File cleaner
// Read a file, remove all the extra spaces and write it back to the same file.

// For example, if the file input was

// hello     world    my    name   is       raman
// After the program runs, the output should be

// hello world my name is raman



const fs = require ('fs').promises;
async function cleanFile(filePath) {
    try{
        let data = await fs.readFile(filePath,'utf-8');
        let cleanData = data.replace(/\s+/g, ' ').trim();
        await fs.writeFile(filePath,cleanData);
    }catch(error){
        console.log('error: ',error);
    }
}
cleanFile('input.txt');


