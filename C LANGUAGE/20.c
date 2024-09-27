//20. Find and print the difference between the maximumand minimum elements in arr = [80, 30, 70, 50,20].
#include<stdio.h>
int main(){
	int i,j;
	int arr[]={80,30,70,50,20};
	int length=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length;i++){
		for(j=i+1;j<length;j++){
			if(arr[i]>arr[j]){
				int sum=arr[i]+arr[j];
				arr[i]=arr[j];
				arr[j]=sum-arr[i];
			}
		}
	}
		printf("max=%d\n",arr[length-1]-arr[0]);
}
