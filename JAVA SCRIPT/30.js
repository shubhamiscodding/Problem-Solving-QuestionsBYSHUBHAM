//30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
var n=132456;
var str=n.toString();
var even=0;
var odd=0;
for(i=0;i<str.length;i++){
    if(str[i]%2==0){
        even=even+str[i]*1;
    }
    else{
        odd=odd+str[i]*1;
    }
}
console.log("even=",even);
console.log("odd=",odd);