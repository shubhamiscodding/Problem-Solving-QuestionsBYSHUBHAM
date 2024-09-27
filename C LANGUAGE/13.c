//13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false
#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int i;
	int length=sizeof(arr)/sizeof(arr[0]);
	int count=0;
	for(i=0;i<length;i++){
		if(arr[i]==3){
			count++;
		}
		
	}
	if(count>0){
		printf("true");
	}
	else{
			printf("false");
		}
}
