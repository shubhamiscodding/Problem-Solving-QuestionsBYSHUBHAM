//36. Print a pyramid pattern with n rows.
var n=5;
for(var i=0;i<n;i++){
    var row='';
    for(var k=n-i;k>0;k--){
        row=row+' ';
    }
    for(var j=0;j<i;j++){
        row=row+'* ';
    }
    console.log(row);
}