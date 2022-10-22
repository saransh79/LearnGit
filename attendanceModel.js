const mongoose=require("mongoose")

const atttendanceList= new mongoose.Schema({
    subjectId:{
        type:mongoose.Schema.Types.ObjectId,
        ref:"Subject",
        required:true
    },
    studentId:{
        type:mongoose.Schema.Types.ObjectId,
        ref:"Student",
        required:true
    },
    date:{
        type:Date,
        default: Date.now()
    }
})

// atttendanceList.pre("save",function(next){
//     const currentDate = new Date()
//     const options = {
//         day: '2-digit',
//         month: '2-digit',
//         year: 'numeric',
//       }
//       this.date = new Intl.DateTimeFormat('en-US', options).format(currentDate) 
//     next()
// })

const Attendance=new mongoose.model("Attendance",atttendanceList)

module.exports=Attendance
