let arr = [3, 54, 1, 2, 4];

//* For loop
for (let i = 0; i < arr.length; i++)
{
    console.log(arr[i]);
}
/*
3
54
1
2
4
*/

//* For-each loop
arr.forEach(element => {
    console.log(element * element);
})
/*
9
2916
1 
4
16
*/

//* Array.from
let Name = "Karan";
let Arr = Array.from(Name);
console.log(Arr); // [ 'K', 'a', 'r', 'a', 'n' ]

//* For-of loop 
for (let i of arr) {
    console.log(i);
}
/*
3
54
1
2
4
*/

//* For-in loop
for (let i in arr) {
    console.log(arr[i]);
}
/*
3
54
1
2
4
*/