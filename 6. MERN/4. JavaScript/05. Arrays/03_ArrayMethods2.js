let arr = [10, 20, 30, 40, 50];

console.log(arr);        // [ 10, 20, 30, 40, 50 ] 
console.log(arr.length); // 5        

delete arr[0];
delete arr[2];

console.log(arr);        // [ <1 empty item>, 20, <1 empty item>, 40, 50 ]  
console.log(arr.length); // 5         

let arr2 = [10, 20];
let arr3 = [5, 4];

let arr4 = arr2.concat(arr3, [-5, -4], "Karan");

console.log(arr2); // [ 10, 20 ]
console.log(arr3); // [ 5, 4 ]
console.log(arr4); // [ 10, 20, 5, 4, -5, -4, 'Karan' ]

let arr5 = [10, 20, 150, 30, 187];

let arr6 = arr5.sort();

console.log(arr5); // [ 10, 150, 187, 20, 30 ]
console.log(arr6); // [ 10, 150, 187, 20, 30 ]

//? How to sort in ascending then?
const compare = (a, b) => 
{
    return a - b;    // To sort in ascending 
    // return b - a; // To sort in descending
}

let arr7 = [551, 22, 3, 14, 5, 6, 8, 7, 229]
arr7.sort(compare);

console.log(arr7); // [ 3, 5, 6, 7, 8, 14, 22, 229, 551 ]

let arr8 = [10, 20, 30, 40, 50];

arr8.reverse();
console.log(arr8); // [ 50, 40, 30, 20, 10 ]

