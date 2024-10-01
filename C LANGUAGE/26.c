//26. Write a program to check if a string ends with a specific character.
#include<stdio.h>
int main(){
	char str[]="codinggita";
	char c='a';
	int i;
	int length=strlen(str);
	if(str[length-1]== c){
		printf("true");
	}
	else{
		printf("false");
	}
}
