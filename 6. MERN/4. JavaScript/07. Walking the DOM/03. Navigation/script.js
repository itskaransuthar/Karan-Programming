const changeNavRed = () => {
    window.document.body.firstElementChild.firstElementChild.style.background = 'red';
}

let a = window.document.body;

console.log(a.firstChild);
console.log(a.firstElementChild);

if(prompt("Enter red to change the nav bar to red") == 'red')
    changeNavRed();
else
    console.log("No change!");