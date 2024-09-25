//19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.
var arr=[1,2,4,3,5];
var sorted=[...arr].sort((a, b) => a - b); 
var count=0;
for(i=0;i<arr.length;i++){
    if(arr[i]==sorted[i]){
        count++;
    }
}
if(count==arr.length){
    console.log("true")
}
else{
    console.log("false");
}