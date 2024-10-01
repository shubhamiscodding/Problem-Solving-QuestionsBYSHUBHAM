//34. Access and print the first and last element of the array arr = [10, 20, 30, 40,50].
#include<stdio.h>
int main(){
	int arr[]={10,20,30,40,50};
	int length=sizeof(arr)/sizeof(arr[0])-1;
	printf("%d\n" "%d\n" ,arr[0],arr[length]);
}
