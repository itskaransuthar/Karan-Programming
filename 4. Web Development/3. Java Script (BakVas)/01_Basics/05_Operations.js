let value = 3
let negativeValue = -value
// console.log(negativeValue) // 3

console.log(2 + 5)     // 7
console.log(2 - 5)     // -3
console.log(2 * 5)     // 10
console.log(2 / 5)     // 0.4
console.log(2 % 5)     // 2
console.log(2 % -5)    // 2
console.log(-2 % 5)    // -2
console.log(-2 % -5)   // -2
console.log(2 ** 5)    // 32
console.log(5 % 2)     // 1
console.log(-5 % 2)    // -1
console.log(5 % -2)    // 1
console.log(-5 % -2)   // -1

let str1 = "Hello"
let str2 = "Jii"

let str3 = str1 + " " + str2
console.log(str3)                // Hello Jii

console.log(1 + 2)               // 3
console.log("1" + 2)             // 12
console.log(1 + "2")             // 12
console.log("1" + "2")           // 12
console.log(1 + 2 + 2)           // 5
console.log("1" + 2 + 2)         // 122
console.log(1 + "2" + 2)         // 122
console.log(1 + 2 + "2")         // 32
console.log("1" + "2" + 2)       // 122
console.log("1" + 2 + "2")       // 122
console.log(1 + "2" + "2")       // 122
console.log("1" + "2" + "2")     // 122


console.log(3 + 4 * 5 % 3)       // 5
console.log(3 + ((4 * 5) % 3))   // 5

console.log(true)                // true
console.log(+true)               // 1
console.log(-true)               // -1
console.log(false)               // true
console.log(+false)              // 0
console.log(-false)              // -0
console.log("Karan")             // Karan
console.log(+"Karan")            // Nan
console.log(-"Karan")            // Nan
console.log("")                  // 
console.log(+"")                 // 0
console.log(-"")                 // -0

let num1, num2, num3

num1 = num2 = num3 = 2 + 2
console.log(num1)                 // 4
console.log(num2)                 // 4
console.log(num3)                 // 4

let a = 100, b
console.log(a, b)                 // 100 undefined

b = a++
console.log(a, b)                 // 101 100

a = 100
b = ++a
console.log(a, b)                 // 101 101

a = 100
b = a-- 
console.log(a, b)                 // 99 100

a = 100
b = --a
console.log(a, b)                 // 99 99