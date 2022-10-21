class ErrorHandler extends Error{       //Error is by-default class in js
    constructor(message,statusCode){    //two parameters of ErrorHandler
        super(message);                 //super-> message to be used here
        this.statusCode = statusCode;   
        console.log(this.statusCode)
        Error.captureStackTrace(this,this.constructor);
    }
}

module.exports = ErrorHandler;
