// const prompt = require("prompt-sync")()

let age = prompt ("Enter your age!");
age = Number.parseInt(age);

const canDrive = (age) => {
    if(age >= 18)
        return true;
    else
        return false;
}

if(canDrive(age))
    console.log("You can drive!");
else 
    console.log("You can't drive!");