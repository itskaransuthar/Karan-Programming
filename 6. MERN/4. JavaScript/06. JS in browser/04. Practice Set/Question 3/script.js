while(1)
{
    let age = prompt ("Enter your age!");
    age = Number.parseInt(age);

    const canDrive = (age) => {
        if(age >= 18)
            return true;
        else
            return false;
    }

    if(age < 0)
    {
        console.error("Enter valid age!!");
    }
    else
    {
        if(canDrive(age))
            console.log("You can drive!");
        else 
            console.log("You can't drive!");
    }

    let flag = confirm("Do you want to continue?");
    
    if(!flag)
        break;
}