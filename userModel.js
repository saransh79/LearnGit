const mongoose = require('mongoose')
const jwt = require('jsonwebtoken')

const userSchema = new mongoose.Schema({
    name:{
        type:String,
        required:true
    },
    email:{
        type:String,
        required:true,
        unique:true
    },
    pwd:{
        type:String,
        select:false,
        required:true
    },
    isAdmin:{
        type:Boolean,
        default:false
    }
})

userSchema.methods.getJwtToken = function(){
    return jwt.sign({id:this._id},process.env.JWT_SECRET_KEY)
}
// userSchema.methods.findID = function(){} 

// const userDetail = new mongoose.model('userDetail',userSchema)

module.exports = new mongoose.model('user',userSchema)