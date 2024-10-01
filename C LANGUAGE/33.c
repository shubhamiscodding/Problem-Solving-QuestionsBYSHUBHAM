//33. Write a program that takes a year as input and checks whether it is a century year (a year divisible by 100)
#include<stdio.h>
int main(){
	int year;
	scanf("%d",&year);
	if(year%100==0){
		printf("century year");
	}
	else{
		printf("not a century year");
	}
}
