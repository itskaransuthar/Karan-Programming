let str1 = "Karan"
let str2 = "Suthar"

console.log(str1 + ' ' + str2)      // Karan Suthar
console.log(str1, str2)             // Karan Suthar

str1 = 'Karan'
str2 = 'Suthar'

console.log(str1 + " " + str2)      // Karan Suthar
console.log(str1, str2)             // Karan Suthar

const myName = "Karan Suthar"
const age = 21

console.log(`Hello my name is ${myName} and my age is ${age}`)
// Hello my name is Karan Suthar and my age is 21

const fatherName = new String("Ghanshyam Suthar")

console.log(typeof myName)      // string
console.log(typeof fatherName)  // object

console.log(`Hello my name is ${myName} and my father's name is ${fatherName}`)
// Hello my name is Karan Suthar and my father's name is Ghanshyam Suthar

console.log(myName[0])                     // K
console.log(fatherName[0])                 // G

console.log(myName.__proto__)              // {}
console.log(fatherName.__proto__)          // {}

console.log(myName.length)                 // 12
console.log(fatherName.length)             // 16

console.log(myName.toUpperCase())          // KARAN SUTHAR
console.log(fatherName.toUpperCase())      // GHANSHYAM SUTHAR

console.log(myName)                        // Karan Suthar
console.log(fatherName)                    // [String: 'Ghanshyam Suthar']

console.log(myName.charAt())               // K           
console.log(myName.charAt(2))              // r
console.log(myName.indexOf('a'))           // 1
console.log(myName.indexOf('r'))           // 2

let motherName = 'Lalita-Suthar'

console.log(motherName)

const str3 = motherName.substring(0, 4)
console.log(str3)            // Lali
console.log(motherName)      // Lalita-Suthar

const str4 = motherName.slice(0, 4)
console.log(str4)            // Lali
console.log(motherName)      // Lalita-Suthar

const newString = "    Karan    Suthar    "
console.log(newString.trim())      // Karan    Suthar
console.log(newString)             //     Karan    Suthar    

const url = "http://karan.com/karan%20suthar"
console.log(url.replace('%20', '-'))
console.log(url.replace("http://karan.com/karan%20suthar", "http://karan.com/karan-suthar"))
console.log(url)

/*
http://karan.com/karan-suthar
http://karan.com/karan-suthar
http://karan.com/karan%20suthar
*/

console.log(url.includes("%20sut"))     // true
console.log(url.includes("%2sut"))      // false

console.log(motherName.split("-"))
console.log(motherName.split(" "))
console.log(motherName.split(''))

/*
[ 'Lalita', 'Suthar' ]
[ 'Lalita-Suthar' ]
[
  'L', 'a', 'l', 'i',
  't', 'a', '-', 'S',
  'u', 't', 'h', 'a',
  'r'
]
*/