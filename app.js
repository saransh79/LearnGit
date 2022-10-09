const express = require("express");
const bodyParser= require("body-parser");
const cookieParser=require("cookie-parser");
const errorMiddleware = require("./Middleware/error")

const app = express();

app.use(express.json({
    limit: "50mb"
}))

app.use(bodyParser.urlencoded({
    limit:"50mb",
    extended:true //to recieve more mb data 
}))

app.use(cookieParser());

const user = require("./Routes/userRoutes")
const Product = require("./Routes/productRoutes")

app.use("/api/v1",user)  //user table
app.use("/api/v1",Product) //product table

app.use(errorMiddleware)

module.exports=app;

