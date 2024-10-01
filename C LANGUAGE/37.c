//37.Given a sorted array and a target value,return the starting and ending position of that target in the array.
#include<stdio.h>
int main(){
	int arr[]={5,7,7,8,8,10};
	int num=8;
	int i;
	int length=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length;i++){
		if(arr[i]==num){
			printf(" %d",i);
		}
	}
}
