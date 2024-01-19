const marvelHeros = ["Thor", "Ironman", "Spiderman"]
const dcHeros = ["Superman", "Flash", "Batman"]

//* marvelHeros.push(dcHeros)
//? console.log(marvelHeros)
// [ 'Thor', 'Ironman', 'Spiderman', [ 'Superman', 'Flash', 'Batman' ] ]

//? console.log(marvelHeros[3])
// [ 'Superman', 'Flash', 'Batman' ]

const allHeros = marvelHeros.concat(dcHeros)
console.log(allHeros)
// [ 'Thor', 'Ironman', 'Spiderman', 'Superman', 'Flash', 'Batman' ]

const allMyHeros = [...marvelHeros, ...dcHeros]
console.log(allMyHeros);
// [ 'Thor', 'Ironman', 'Spiderman', 'Superman', 'Flash', 'Batman' ]

const anotherArray = [1, 2, 3, [4, 5, 6], 7, [6, 7, [4, 5]]]
const simplifiedAnotherArray = anotherArray.flat(Infinity)

console.log(anotherArray);
console.log(simplifiedAnotherArray);
/*
[ 1, 2, 3, [ 4, 5, 6 ], 7, [ 6, 7, [ 4, 5 ] ] ]
[
  1, 2, 3, 4, 5,
  6, 7, 6, 7, 4,
  5
]
*/

console.log(Array.isArray("Karan"))
// false

console.log(Array.from("Karan"))
// [ 'K', 'a', 'r', 'a', 'n' ]

console.log(Array.from({name: "Karan"}))
// []

let score1 = 100
let score2 = 200
let score3 = 300

console.log(Array.of(score1, score2, score3))
// [ 100, 200, 300 ]f