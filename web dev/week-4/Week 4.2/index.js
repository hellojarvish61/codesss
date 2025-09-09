const express = require("express");
const app = express()


// route handler
app.get('/',function(req,res){
    res.send("hello world")
})
app.get('/asd',function(req,res){
    res.send("hello world from asd")
})
app.post('/',function(req,res){
    res.send("hello world from post endpoint")
})
app.listen(3000) // port