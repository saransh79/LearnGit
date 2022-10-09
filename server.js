const app=require("./app");
const dotenv = require("dotenv")
const connectDB = require("./Config/database")

process.on("uncaughtException",(err) => {
    console.log(`Error: ${err}`);
    console.log('Shutting the server due to UnCaught Exception');
    process.exit(1); // to get exit
})

dotenv.config({path:"./Config/.env"})


connectDB()


const server=app.listen(process.env.PORT,()=>{
    console.log("Connected")
})

process.on("unhandledRejection",err=>{
    console.log(`Error: ${err.message}`);
    console.log('Shutting the server due to UnHandled Promise Rejection');

    server.close(() => {
        process.exit(1);
    });
});
