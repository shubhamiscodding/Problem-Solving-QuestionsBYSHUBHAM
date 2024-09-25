//29.Write a program to find all pairs in an array whose sum is equal to a given number.
var arr=[1,2,3,4,5,6];
var num=4;
for(i=0;i<arr.length;i++){
    for(j=i;j<arr.length;j++){
        if(i+j==num){
            console.log([i,j]);
        }
    }
}