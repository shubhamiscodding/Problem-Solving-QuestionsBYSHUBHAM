//32.Write a program that categorizes a person’s age group based on the given age
#include<stdio.h>
int main(){
	int age;
	scanf("%d",&age);
	if(age<13){
		printf("child");
	}
	else if(age>=13 && age<=19){
		printf("Teenager");
	}
	else if(age>=20 && age<=59){
		printf("Teenager");
	}	
	else{
		printf("Senior");
	}
}

