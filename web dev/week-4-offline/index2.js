const express = require("express");
const fs = require("fs");
const app = express();

app.get("files",function(req,res){
    fs.readdir("./files",function(err,files){
        if(err){
            res.status(500).send("error reading files folder");
        }else{
            res.json(files);
        }
    });
});
app.get("/files/:fileName",function(req,res){
    const name = req.params.fileName;
    const path = "./files"+name;

    fs.readFile(path,"utf-8",function(err,data){
        if(err){
            res.status(404).send("file not found");
        }else{
            res.send(data);
        }
    });
});
app.use(function(req,res){
    res.status(404).send("404 not found");
});
app.listen(3000,function(){
    console.log("Server is running on http://localhost:3000");
});