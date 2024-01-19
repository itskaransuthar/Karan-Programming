const accountId = 144553
let accoundEmail = "ks5687129@gmail.com"
var accountPassword = "12345"
accountCity = 'Udaipur'
let accountState

// accountId = 3 //? TypeError

accoundEmail = "karan5687129@gmail.com"
accountPassword = "#Karan_28"
accountCity = 'Vadodara'

console.log()
console.log(accountId)
console.table([accountId, accoundEmail, accountPassword, accountCity, accountState])

{
    var firstName = "Kiran"
    let lastName = "Suthar"
}

firstName = "Karan"
console.log(firstName)

// console.log(lastName) //? ReferenceError

//! Note: Prefer not to use var because of issue in block scope and functional scope

/*
144553
┌─────────┬──────────────────────────┐
│ (index) │          Values          │
├─────────┼──────────────────────────┤
│    0    │          144553          │
│    1    │ 'karan5687129@gmail.com' │
│    2    │       '#Karan_28'        │
│    3    │        'Vadodara'        │
│    4    │        undefined         │
└─────────┴──────────────────────────┘
Karan
*/