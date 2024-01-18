// JavaScript is dynamically typed language where as TypeScript is statically typed language

/*
Primitive Data Types:
    number
    boolean
    string
    null
    undefined
    symbol
    bigint
*/

const score = 100
const scoreValue = 100.3

const isLoggedIn = false
const outsideTemp = null
let userEmail // let userEmail = undefined

const id = Symbol('123')
const anotherId = Symbol('123')

console.log(id == anotherId)    // false
console.log(id === anotherId)   // false

const num1 = 123
const num2 = 123
console.log(num1 == num2)        // true 
console.log(num1 === num2)       // true

// const bigNumber = 99999999999 

/*
Reference Data Types:
    array
    object
    function
*/

const heros = ["Shaktiman", "Naagraj", "Doga"]

let myObj = {
    name: "Karan",
    age: 21
}
console.log(typeof myObj)

const myFunction = function(){
    console.log("Hello World")
}

console.log(typeof myFunction)

console.table([["score", score, typeof score], ["scoreValue", scoreValue, typeof scoreValue], ["isLoggedIn", isLoggedIn, typeof isLoggedIn], ["outsideTemp", outsideTemp, typeof outsideTemp], ["userEmail", userEmail, typeof userEmail], ["id", id, typeof id], ["anotherId", anotherId, typeof anotherId], ["num1", num1, typeof num1], ["num2", num2, typeof num2], ["heros", heros, typeof heros], ["myObj", myObj, typeof myObj], ["myFunction", myFunction, typeof myFunction]])

