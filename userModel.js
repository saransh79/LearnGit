const mongoose=require("mongoose");
const jwt=require("jsonwebtoken");
const userInformation=new mongoose.Schema({   // to define attributes of table
    Name:{
        type:String,
    },
    email:{
        type:String,
        required:true,
        unique:true
    },
    password:{
        type:String,
        select:false,
        required:true
    },
    Role:{
        type:String,
        default:"User"
    }
    // StudentId:Number,
    // Birthday:Date
});

userInformation.methods.getJWTToken=function(){
    return jwt.sign({ id:this._id},process.env.JWT_SECRET_KEY)
}

const  User=new mongoose.model("User",userInformation); // to give name and definition of table

module.exports=User;



