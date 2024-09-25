//10. Given an array of integers, count how many numbers are even and how many are odd.
#include<stdio.h>
void myfn(int even,int odd){
	char arr[]={1,2,3,4,5};
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("even=%d\n",even);
	printf("odd=%d\n",odd);
}

int main(){
	myfn(0,0);
}
