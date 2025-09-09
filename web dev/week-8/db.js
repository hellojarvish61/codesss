const mongoose = require("mongoose");
console.log("connected to")
mongoose.connect("mongodb+srv://mohitranjan61:HkUZk5q1QCQgHfWA@cluster0.asfrata.mongodb.net/coursera-app")
const Schema = mongoose.Schema;
const ObjectId = mongoose.Types.ObjectId; 

const userSchema = new Schema({
    email :{type:String,unique : true},
    password: String,
    firstName: String,
    lastName : String
});


const adminSchema = new Schema({
     email :{type:String,unique : true},
    password: String,
    firstName: String,
    lastName : String
});


const courseSchema = new Schema({
    title : String,
    description : String,
    price : Number,
    imageUrl : String,
    creatorId : ObjectId
});


const purchaseSchema = Schema({
    userId : ObjectId,
    courseId: ObjectId
});

const userModel = mongoose.model("user",userSchema);
const adminModel = mongoose.model("admin",userSchema);
const courseModel = mongoose.model("course",courseSchema);
const purchaseModel = mongoose.model("purchase",purchaseSchema);


module.exports= {
    userModel,
    adminModel,
    courseModel,
    purchaseModel
};