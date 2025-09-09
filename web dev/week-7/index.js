const bcrypt = require("bcrypt");
const express = require("express");
const { UserModel, TodoModel } = require("./db");
const jwt = require("jsonwebtoken");
const mongoose = require("mongoose");
const JWT_SECRET = "acccscsccds@123";
const { z } = require("zod"); 

mongoose.connect("mongodb+srv://mohitranjan61:HkUZk5q1QCQgHfWA@cluster0.asfrata.mongodb.net/todo-mohit-3333");
const app = express();

app.use(express.json());

app.post("/signup", async function (req, res) {
    const requiredBody = z.object({
        email: z.string().min(3).max(100),
        name : z.string().min(3).max(100),
        password : z.string().min(3).max(30)
    })
    // const parsedData = requiredBody.parse(req.body);
    const parsedDatawithSuccess = requiredBody.safeParse(req.body);
    
    if(!parsedDatawithSuccess.success){
        res.json({
            message:"incorrect format", 
            error:parsedDatawithSuccess.error
        })
        return
    }
    const email = req.body.email;
    const password = req.body.password;
    const name = req.body.name;
    let errorThrow  = false;
    try{
    const hasedPassword = await bcrypt.hash(password,5);
    console.log(hasedPassword);
   await UserModel.insertMany({
    email,
    password: hasedPassword,
    name
});
}catch(e){
    res.json({
        message:"user already exists"
    })
    errorThrow = true;
}

    if(!errorThrow){
        res.json({
        message: "You are logged up!"
    });
    }
});

app.post("/signin", async function (req, res) {
    const email = req.body.email;
    const password = req.body.password;

    const user = await UserModel.findOne({
        email,
        password
    });
    if(!response){
        res.status(403).json({
            message:"user does not exist in our db"
        })
    }
    const passwordMatch = await bcrypt.compare(password,express.response.password);
    if (user) {
        const token = jwt.sign({ id: user._id }, JWT_SECRET); // ✅ Secret added
        res.json({ token });
    } else {
        res.status(403).json({
            message: "Incorrect credentials"
        });
    }
});

app.post("/todo",auth,function(req,res){
    s
});
app.get("/todos" ,auth,function(req,res){

});

function auth(req,res,next){
    const token = req.header.token;
    const decodedData = jwt.verify(token,JWT_SECRET);

    if(decodedData){
        req.userId = decodedData.userId;
        next;
    }else{
        res.status(403).json({
            message:"incorrect credentials"
        })
    }
}



app.listen(3000, () => {
    console.log("Server running on port 3000");
});
