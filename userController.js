const userModel = require('../Models/userModel');
const User=require('../Models/userModel')    //user is database name
const JWT=require('jsonwebtoken')


const test=async (req,res)=>{
    try{
        // console.log(User)
        const token=JWT.sign("Aditya",process.env.JWT_SECRET_KEY)    //encrypt generation of token
        const verify=JWT.verify(token,process.env.JWT_SECRET_KEY)    //decrpyt
        res.json({
            token:token,
            data:verify
        })
    }
    catch(e){
        console.log(e)
    }
}

const userRegister=async (req,res)=>{
    try{
        // console.log('hii...')
        // console.log(req.query)
        // // console.log(req.body)
        // res.send("hello mc")
        // User.create(req.body);      //this tells that user is table name and which operation is need to be performed. (to interact with mongodb)
        // res.send('create')
        // console.log(req.body.name)    //this is to access a particular value (use the name of the key)

        if(req.body.confirmPassword!=req.body.password){
             res.send("password doesnot match")
             return
        }
        const user=await User.create({  //key value-pair
            // StudentId:req.body.StudentId, 
            email:req.body.email,
            password:req.body.password,
            isadmin:req.body.isadmin,
            confirmPassword:req.body.confirmPassword,
        })
        res.send("user registered successfull")
        // res.json({
        //     user:user
        // })
    }
    catch(e){
        console.log(e)
        res.send("user already exist")
    }
}


const login=async(req,res)=>{
    try{
     const user=await  User.findOne({email:req.body.email}).select("+password")  //.select() is used to tell mongo we need to get password
    //   console.log(logIN)
      if(user!=null){
        if(req.body.password==user.password){
           
            const token=user.getJWTToken();
            res.cookie("token",token).json({
                message:"user logged in successfully"
            })
        }
        else{
            res.json({message:"enter the password again"})
        }
      }
      else{
        res.json({message:"user does not exist"})
      }
 }
    catch(e){
        console.log(e)
    }
}


const changePassword=async(req,res)=>{
    try{
        const user=await User.findById({_id:JWT.verify(req.cookies.token,process.env.JWT_SECRET_KEY).id})
        user.password=req.body.newPassword
        await user.save()        
        res.json({message:"Password changed Successfully"})
    }
    catch(e){
        console.log(e)
    }
}

const updateDetail =async(req,res)=>{
    try{
        const user=await User.findById({_id:JWT.verify(req.cookies.token,process.env.JWT_SECRET_KEY).id})
        User.updateOne({_id:user._id},req.body)
        res.json({message:"User detail changed successfully"})
    }
    catch(e){
        console.log(e)
    }
}


const logout =async(req,res)=>{
    try{
        res.clearCookie("token").json({
            message:'User logged Out Successfully'
        })
    }
    catch(e){
        console.log('e')
    }
}

const findOne=async(req,res)=>{
    try{
      const findone=await  User.findOne({email:{$gt:201}}, 
            );  
    }
    catch(e){
        console.log('e')
    }
}

const findAll=async(req,res)=>{
    try{
      const users=await  User.find();  
      res.status(200).json({success:true,
    users})
    }
    catch(e){
        console.log('e')
    }
}


const Delete=async(req,res)=>{
    try{
        const deltemany=await  User.deleteMany({StudentId:201}, 
            function(err, data) {
                if(err){
                    console.log(err);
                }
                else{
                    res.send(data);
                }
            });  
    }
    catch(e){
        console.log('e')
    }
}

const deletebyid=async (req,res)=>{
    try{
        const DeletebyId=await  User.findByIdAndDelete(req.body.StudentId, 
            {name:req.body.name}, function(err, data) {
                if(err){
                    console.log(err);
                }
                else{
                    res.send(data);
                    console.log("Data Deleted");
                }
            });  
    }
    catch(e){
        console.log('e')
    }
}

const makeAdmin=async (req,res)=>{
    try{
        const user=await User.findById(req.params._id)
        if(!user.isadmin){
            await User.findByIdAndUpdate(req.params._id,{isadmin:true}) 
            res.status(200).json({
                message:"User has become admin"
            })
        }
        else{
            res.json({
                message:"User is already a admin"
            })
        } 
    }
    catch(e){
        console.log(e)
    }
}

const put=async(req,res)=>{
    try{
        res.send("this is put")
    }
    catch(e){
        console.log('e')
    }
}
const patch=async(req,res)=>{
    try{
        res.send("this is put")
    }
    catch(e){
        console.log('e')
    }
}

module.exports={userRegister,findOne,Delete,put,patch,findAll,deletebyid,login,test,logout,changePassword,updateDetail,makeAdmin}
