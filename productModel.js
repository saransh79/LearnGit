const mongoose=require("mongoose");
const productInformation=new mongoose.Schema({   // to define attributes of table
    Image:String,
    Name:String,
    Company:String,
    Category:String,
    Features:String,
    Currency:String,
    Price:Number,
    Quantity:Number,
    Rating:Number ,
    Review:String,
    SellerId:{
            type:mongoose.Schema.Types.ObjectId , //foreign key , taken from mongodb
            ref:"User"
    }
});
const  Product=new mongoose.model("Product",productInformation); // to give name and definition of table



module.exports=Product;


