// Array: Object, collection of elements

const myArr1 = [0, 1, 2, 3, 4, 5, 'Karan', false, 4.34, NaN, undefined]
console.table(myArr1)

//! Note: Arrays are resizable (not fixed) and contain a mix of different data types

const myArr2 = [0, 1, 2, 3, 4, 5]
console.log(myArr2)
// [ 0, 1, 2, 3, 4, 5 ]

console.log(myArr2[0], myArr2[1], myArr2[2], myArr2[3])
// 0 1 2 

//? Shallow Copy
const myArr3 = myArr2
myArr3[1] = 10

console.log(myArr2)
console.log(myArr3)

/* 
[ 0, 10, 2, 3, 4, 5 ]
[ 0, 10, 2, 3, 4, 5 ]
*/

//? Deep Copy
const myArr4 = myArr2.concat([])
myArr4[1] = 1

console.log(myArr2)
console.log(myArr4)

/*
[ 0, 10, 2, 3, 4, 5 ]
[ 0, 1, 2, 3, 4, 5 ]
*/

const A = new Array("Karan", 21, "Bhavika", 22)
console.table(A)

/*
┌─────────┬───────────┐
│ (index) │  Values   │
├─────────┼───────────┤
│    0    │  'Karan'  │
│    1    │    21     │
│    2    │ 'Bhavika' │
│    3    │    22     │
└─────────┴───────────┘
*/