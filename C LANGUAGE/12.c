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
