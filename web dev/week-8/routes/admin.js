const { Router } = require("express");
const adminRouter = Router();
const { adminModel } = require("../db");
const JWT_USER_PASSWORD_admin = "hellobahiya@1233"
const jwt = require( "jsonwebtoken" )
// Admin signup route
adminRouter.post("/signup",async function(req, res) {
  const { email,password,firstName,lastName } = req.body;

    await adminModel.create({
        email:email,
        password:password,
        firstName:firstName,
        lastName: lastName
    })
    res.json({
        message: "signup endpoint"
    });
});

// Admin signin route
adminRouter.post("/signin",async function(req, res) {
  const { email,password } = req.body;

    const user = await adminModel.findOne({
        email:email,
        password : password
    })
    if(admin){
        const token = jwt.sign({
            id:admin._id
        },JWT_USER_PASSWORD_admin);
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

// Add a course
adminRouter.post("/course", function(req, res) {
  res.json({
    message: "course created"
  });
});

// Get all courses in bulk
adminRouter.get("/course/bulk", function(req, res) {
  res.json({
    message: "bulk course endpoint"
  });
});

module.exports = {
  adminRouter
};
