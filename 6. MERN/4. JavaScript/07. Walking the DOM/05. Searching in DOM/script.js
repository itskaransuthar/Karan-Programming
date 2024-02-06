//* Task 1: Change the 'Card title' to red color

// window.document.body.firstElementChild.nextElementSibling.firstElementChild.nextElementSibling.firstElementChild.style.color = 'red';

// let a = window.document.getElementsByClassName("card-title");
// a[0].style.color = 'red';

let a = window.document.getElementById("first-card-id");
a.style.color = "red";

let b = window.document.querySelectorAll(".card-title");
console.log(b);

b[0].style.color = 'red';
b[1].style.color = 'blue';
b[2].style.color = 'green';

let c = window.document.querySelector(".this");
c.style.color = "green";
c.style.background = "lightYellow";

console.log(window.document.getElementsByTagName('a'));