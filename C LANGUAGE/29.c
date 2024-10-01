//29.Write a program to find all pairs in an array whose sum is equal to a given number.
#include<stdio.h>
int main(){
	int arr[]={2,15,11,7};
	int num=9;
	int i;
	int j;
	int length=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length;i++){
		for(j=i;j<length;j++){
			if(arr[i]+arr[j]==num){
			printf("%d\n",i);
			printf("%d\n",j);
			}
		}
	}
}
