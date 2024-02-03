let arr = [45, 23, 21];

console.log(arr);

let newArr1 = arr.forEach((value, index, array) => {
    console.log(value, index, array);
    return value + 1;
})
/*
45 0 [ 45, 23, 21 ]
23 1 [ 45, 23, 21 ]
21 2 [ 45, 23, 21 ]
*/

let newArr2 = arr.map((value, index, array) => {
    console.log(value, index, array);
    return value + index;
})
/*
45 0 [ 45, 23, 21 ]
23 1 [ 45, 23, 21 ]
21 2 [ 45, 23, 21 ]
*/

console.log(newArr1); // undefined
console.log(newArr2); // [ 45, 24, 23 ]

let myArr = [45, 23, 21, 0, 3, 5];
let myAns = myArr.filter((value, index, array) => {
    console.log(value, index, array);
    return value < 10;
})

/*
0 3 [ 45, 23, 21, 0, 3, 5 ]
3 4 [ 45, 23, 21, 0, 3, 5 ]
5 5 [ 45, 23, 21, 0, 3, 5 ]
*/

console.log(myArr); // [ 45, 23, 21, 0, 3, 5 ]
console.log(myAns); // [ 0, 3, 5 ]

let Array = [1, 2, 3, 5, 2, 11];

reduceFunction = (a, b) => {
    return a + b;
}

let newArray = Array.reduce(reduceFunction)

console.log(Array);    // [ 1, 2, 3, 5, 2, 1 ]
console.log(newArray); // 14

compare = (a, b) => {
    return a - b;
}

Array.sort(compare);
console.log(Array);