//12. Add the number 6 to the end of the array arr = [1,2, 3, 4, 5] and print the updated array.
#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	arr[5]=6;
	int length=sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0;i<=length;i++){
		printf("%d",arr[i]);
	}
}
