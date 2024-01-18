"use strict"; //? Treat all JS code as newer version

// alert(3 + 3) //! Error (We are using node js, not browser)

//* Note: Bad practice try to write code in such a way to make it readable
console.log(3 + 3); console.log("Karan") // ❌ 
console.log(3 +                          // ❌ 
    3)

let name = 'Karan' 
// OR let name = "Karan"
let age = 18
let isLoggedIn = false

/*
Types of data types:
    1. Primitive Data Types
        number
        bigint
        string 
        boolean
        undefined
        Nan
        null
        symbol (used for uniqueness)

    2. Non-Primitive Data Types
        object
*/

console.log(typeof "Karan")     // string
console.log(typeof 4)           // number
console.log(typeof 5.6)         // number
console.log(typeof null)        // object
console.log(typeof Nan)         // number
console.log(typeof undefined)   // undefined
console.log(typeof false)       // boolean
console.log(typeof true)        // boolean