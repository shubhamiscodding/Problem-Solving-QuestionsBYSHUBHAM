//27. Write a program to extract the file extension from a given filename.
var str="document.pdf";
var ex="";
for(i=str.indexOf(".");i<str.length;i++){
    ex=ex+str[i];
}
console.log(ex);