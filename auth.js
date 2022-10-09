const jwt=require("jsonwebtoken")
const User=require("../Models/userModel")


const isAuthenticatedUser= async (req,res,next)=>{
    try{

            const token=req.cookies.token  //OR WE CAN USE DESTRUCTERING       const {token}=req.cookies
            if(!token){
                res.status(401).json({message:"Please Login"})
                return
            }
            const decodedToken=jwt.verify(token,process.env.JWT_SECRET_KEY) // this will give id and iat 
            req.user= await User.findById(decodedToken.id) // we only want to find by id so .id is used
            //req.user is used to make it accesssible to function written after isAuthenticatedUser
            console.log(decodedToken)
            next()

    }
    catch(e){
        res.json({message:"error"})
    }
}

const isAdmin= async (req,res,next)=>{
    try{
            if(req.user.Role!="Admin")
            {
                res.status(401).json({message:"Unathorised Access"})
                
            }
            next()

    }
    catch(e){

    }
}

module.exports={isAuthenticatedUser,isAdmin}