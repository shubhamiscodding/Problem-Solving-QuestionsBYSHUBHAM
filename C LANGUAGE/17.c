//17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result.
#include<stdio.h>
int main(){
	int arr[]={1,-2,3,-4,5,-6};
	int positive=0;
	int negative=0;
	int i;
	int length=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length;i++){
		if(arr[i]>0){
			positive++;
		}
		else if(arr[i]<0){
			negative++;
		}
	}
	printf("positive=%d",positive);
	printf("negative=%d",negative);
}
