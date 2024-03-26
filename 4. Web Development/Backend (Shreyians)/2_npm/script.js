//* ******************************* *//
var oneLinerJoke = require('one-liner-joke')

console.log(oneLinerJoke.getRandomJoke());

//* ******************************* *//
var figlet = require('figlet');

figlet("Karan Suthar", (err, data) => {
    if(err)
        return;
    console.log(data);
})

//* ******************************* *//
const express = require('express')

const app = express()

app.get('/', (req, res) => {
    res.send("kya haal chal Duniya");
})

app.get('/profile', (req, res) => {
    res.send("Hum profile me aa chuke hain, samjhe");
})

app.get('/contact', (req, res) => {
    res.send("Contact kar rhe ho bahut tej ho rhe ho");
})

app.listen(3000);

// node ./script.js
// npm i nodemon -g
// npx nodemon ./script.js