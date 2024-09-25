//32.Write a program that categorizes a person’s age group based on the given age
var age=15;
if(age<13){
    console.log("child");
}
else if(age>13 && age<19){
    console.log("teenager");
}
else if(age>20 && age<59){
    console.log("Adult");
}
else{
    console.log("Senior");
}