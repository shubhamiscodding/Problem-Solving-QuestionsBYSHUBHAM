//20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20].
var arr=[80,30,70,50,20];
arr.sort();
var diff=arr[arr.length-1]-arr[0];
console.log(diff);