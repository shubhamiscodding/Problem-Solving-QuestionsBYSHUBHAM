//14. Add Element to the Beginning of an Array
#include<stdio.h>
int main(){
	int arr[]={1,2,3,4};
	arr[-1]=0;
	int length=sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=-1;i<length;i++){
		printf("%d",arr[i]);
	}
}
