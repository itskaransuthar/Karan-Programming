// ******************************* Num *******************************

const score = 54

const balance = new Number(100)

console.log(score)      // 54
console.log(balance)    // [Number: 100]
 
console.log(typeof score)       // number
console.log(typeof balance)     // object

console.log(balance.toString())           // 100
console.log(typeof balance)               // object
console.log(typeof balance.toString())    // string

console.log(balance.toFixed(5))           // 100.00000
console.log(typeof balance)               // object
console.log(typeof balance.toFixed(3))    // string

const otherNumber = 24.5874094
console.log(otherNumber.toPrecision(4))          // 24.59
console.log(typeof otherNumber)                  // number
console.log(typeof otherNumber.toPrecision(6))   // string

const zeros = 1000000000000
console.log(zeros.toLocaleString())
console.log(zeros.toLocaleString('en-IN'))

/*
1,000,000,000,000
10,00,00,00,00,000
*/

console.log(Number)
console.log(Number.MAX_VALUE)
console.log(Number.MIN_VALUE)
console.log(Number.MAX_SAFE_INTEGER)
console.log(Number.MIN_SAFE_INTEGER)

/*
[Function: Number]
1.7976931348623157e+308
5e-324
9007199254740991
-9007199254740991
*/

// ******************************* Math *******************************

console.log(Math)               // Object [Math] {}
console.log(Math.abs(-5))       // 5
console.log(Math.round(4.35))   // 4
console.log(Math.round(4.5))    // 5
console.log(Math.round(4.85))   // 5
console.log(Math.round(-8.3))   // -8
console.log(Math.round(-8.5))   // -8
console.log(Math.round(-8.7))   // -9
console.log(Math.ceil(5.2))     // 6
console.log(Math.ceil(-5.2))    // -5
console.log(Math.floor(5.2))    // 5
console.log(Math.floor(-5.2))   // -6

console.log(Math.min(4, 3, 2, 1, 3, 4, 5))  // 1
console.log(Math.max(4, 3, 2, 1, 3, 4, 5))  // 5

console.log(Math.random())
console.log(Math.floor(Math.random()*100 + 1))

/*
0.8538823842614434
91
*/

const minValue = 10
const maxValue = 20

console.log(Math.floor(Math.random()*(maxValue - minValue + 1)) + minValue)