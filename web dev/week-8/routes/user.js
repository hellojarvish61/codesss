const { Router } = require("express");
const userRouter = Router();
const jwt = require("jsonwebtoken");
const { userModel } = require("../db");
const JWT_USER_PASSWORD = "hellojarvsh@2233"

// Signup endpoint
userRouter.post("/signup",async function(req, res) {
    const { email,password,firstName,lastName } = req.body;

    await userModel.create({
        email:email,
        password:password,
        firstName:firstName,
        lastName: lastName
    })
    res.json({
        message: "signup endpoint"
    });
});

userRouter.post("/signin", async function(req, res) {
    const { email,password } = req.body;

    const user = await userModel.findOne({
        email:email,
        password : password
    })
    if(user){
        const token = jwt.sign({
            id:user._id
        },JWT_USER_PASSWORD);
    res.json({
        token : token
    })
    }else{
            res.json({
        message: "signin endpoint"
    });
    }
});

userRouter.post("/purchases", function(req, res) {
    res.json({
        message: "purchase endpoint"
    });
});

module.exports = {
    userRouter: userRouter
};
