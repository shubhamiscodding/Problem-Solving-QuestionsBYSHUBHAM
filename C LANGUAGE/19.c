//19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.
#include<stdio.h>
int main(){
	int arr[]={1,2,4,3,5};
	int i,j,k;
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
	for(k=0;k<length;k++){
	printf("%d",arr[k]);	
	}
	
}
