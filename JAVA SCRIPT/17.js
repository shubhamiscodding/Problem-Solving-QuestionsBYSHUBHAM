//17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.
var arr=[1,-2,3,-4,5,-6];
var positive=0;
var negative=0;
for(i=0;i<arr.length;i++){
    if(arr[i]>0){
        positive++;
    }
    else if(arr[i]<0){
        negative++;
    }
}
console.log("positive=",positive);
console.log("negative=",negative);