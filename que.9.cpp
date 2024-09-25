//9. Sort an Array in Ascending Order
#include<stdio.h>
int main(){
	int arr[]={4,2,8,5,1};
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(arr[i]>arr[j]){
			 int sum=arr[i]+arr[j];
				arr[i]=arr[j];
				arr[j]=sum-arr[i];
			}
		}
	}
	for(int k=0;k<length;k++){
	    printf("%d",arr[k]);
	}
}
