//21. Write a program to convert a given string to uppercase.
#include<stdio.h>
#include<string.h>
int main(){
	char str[]="hello";
	int i;
	for(i=0;i<strlen(str);i++){
		printf("%c",str[i]-32);
	}
}
