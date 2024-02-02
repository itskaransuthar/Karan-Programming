// Array Methods

myArr = []

myArr.push(0)
myArr.push(1)
myArr.push(2)
myArr.push(3)
myArr.push(4)
myArr.push(5)
myArr.push(6)

console.log(myArr)
// [ 0, 1, 2, 3, 4, 5, 6 ]

myArr.pop()
myArr.pop()
myArr.pop()

console.log(myArr)
// [ 0, 1, 2, 3 ]

myArr.unshift(0)
console.log(myArr)
// [ 0, 0, 1, 2, 3 ]

myArr.unshift(9)
console.log(myArr)
// [ 9, 0, 0, 1, 2, 3 ]

myArr.unshift(8)
myArr.unshift(7)
console.log(myArr)
// [ 7, 8, 9, 0, 0, 1, 2, 3 ]

myArr.shift()
myArr.shift()
myArr.shift()
myArr.shift()
console.log(myArr)
// [ 0, 1, 2, 3 ]

console.log(myArr.includes(9))
// false

console.log(myArr.indexOf(9))
// -1

console.log(myArr.indexOf(2))
// 2

const newArr = myArr.join()
console.log(newArr)
console.log(typeof newArr)

let Arr1 = [10, 20, 30];
let Arr2 = [40, 50, 60];
Arr1.join(Arr2)

console.log(Arr1);
console.log(Arr2);
/*
[ 10, 20, 30 ]
[ 40, 50, 60 ]
*/

Arr1 = Arr1.concat(Arr2)
console.log(Arr1);
console.log(Arr2);
/*
[ 10, 20, 30, 40, 50, 60 ]
[ 40, 50, 60 ]
*/

//* slice vs splice

let myArray1 = [10, 20, 30, 40, 50, 60]
let myArray2 = myArray1.slice(1, 4);

console.log(myArray1);
console.log(myArray2);
/*
[ 10, 20, 30, 40, 50, 60 ]
[ 20, 30, 40 ]
*/

let myArray3 = myArray1.splice(0, 3);

console.log(myArray1);
console.log(myArray3);
/*
[ 40, 50, 60 ]
[ 10, 20, 30 ]
*/

myArray1 = [10, 20, 30, 40, 50, 60]
myArray3 = myArray1.splice(1, 4)

console.log(myArray1);
console.log(myArray3);
/*
[ 10, 60 ]
[ 20, 30, 40, 50 ]
*/