//15. Remove the Last element Input
#include<stdio.h>
int main(){
	int arr[4]={1,2,3,4,5};
	int length=sizeof(arr)/sizeof(arr[0]);
	int i;
	for(i=0;i<length;i++){
		printf("%d",arr[i]);
	}
}
