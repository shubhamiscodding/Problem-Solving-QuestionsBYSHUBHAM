//37. Given a sorted array and a target value, return the starting and ending position of that target in the array.
var arr=[5,7,7,8,8,10];
var target=8;
for(var i=0;i<arr.length;i++){
    if(arr[i]==target){
        console.log(i);
    }
}