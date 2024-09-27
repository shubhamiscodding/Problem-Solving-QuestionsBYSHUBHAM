//22. Write a program to find the length of a given string.

//method 1
#include<stdio.h>
int main(){
	char str[]="string";
	int length=strlen(str);
	printf("%d",length);
}

//Method 2
#include<stdio.h>
int main(){
	char str[]="string";
	int length=sizeof(str)/sizeof(str[0])-1;
	printf("%d",length);
}
