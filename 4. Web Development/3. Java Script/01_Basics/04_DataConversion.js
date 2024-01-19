let score = 33
console.log("score:", score, "and it's type is:", typeof score)
//* score: 33 and it's type is: number

score = "33"
let value = Number(score)
console.log("score:", score, "and it's type is:", typeof score)
console.log("value:", value, "and it's type is:", typeof value)
//* score: 33 and it's type is: string
//* value: 33 and it's type is: number

score = "33abc"
value = Number(score)
console.log("score:", score, "and it's type is:", typeof score)
console.log("value:", value, "and it's type is:", typeof value)
//* score: 33abc and it's type is: string
//* value: NaN and it's type is: number

score = null
value = Number(score)
console.log("score:", score, "and it's type is:", typeof score)
console.log("value:", value, "and it's type is:", typeof value)
//* score: null and it's type is: object
//* value: 0 and it's type is: number

score = undefined
value = Number(score)
console.log("score:", score, "and it's type is:", typeof score)
console.log("value:", value, "and it's type is:", typeof value)
//* score: undefined and it's type is: undefined
//* value: NaN and it's type is: number

score = NaN
value = Number(score)
console.log("score:", score, "and it's type is:", typeof score)
console.log("value:", value, "and it's type is:", typeof value)
//* score: NaN and it's type is: number
//* value: NaN and it's type is: number

score = true
value = Number(score)
console.log("score:", score, "and it's type is:", typeof score)
console.log("value:", value, "and it's type is:", typeof value)
//* score: true and it's type is: boolean
//* value: 1 and it's type is: number

score = false
value = Number(score)
console.log("score:", score, "and it's type is:", typeof score)
console.log("value:", value, "and it's type is:", typeof value)
//* score: false and it's type is: boolean
//* value: 0 and it's type is: number

let flag = 1
let isFlag = Boolean(flag)
console.log("flag:", flag, "and it's type is:", typeof flag)
console.log("isFlag:", isFlag, "and it's type is:", typeof isFlag)
//* flag: 1 and it's type is: number
//* isFlag: true and it's type is: boolean

flag = 0
isFlag = Boolean(flag)
console.log("flag:", flag, "and it's type is:", typeof flag)
console.log("isFlag:", isFlag, "and it's type is:", typeof isFlag)
//* flag: 0 and it's type is: number
//* isFlag: false and it's type is: boolean

flag = "Karan"
isFlag = Boolean(flag)
console.log("flag:", flag, "and it's type is:", typeof flag)
console.log("isFlag:", isFlag, "and it's type is:", typeof isFlag)
//* flag: Karan and it's type is: string
//* isFlag: true and it's type is: boolean

flag = ""
isFlag = Boolean(flag)
console.log("flag:", flag, "and it's type is:", typeof flag)
console.log("isFlag:", isFlag, "and it's type is:", typeof isFlag)
//* flag:  and it's type is: string
//* isFlag: false and it's type is: boolean

