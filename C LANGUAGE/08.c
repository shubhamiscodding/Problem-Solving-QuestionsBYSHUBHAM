//8. Find the Average of an Array.
#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int sum=0;
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++){
		sum=sum+arr[i];
	}
	int avg=sum/length;
	printf("%d",avg);
}
