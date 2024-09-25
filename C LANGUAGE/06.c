//6. Write a function that checks if a username and password match predefined values.
	#include<stdio.h>
	int main(){
		char username[]="admin";
		char name[]="admin";
		int count=0;
		int password=1234;
		int length=sizeof(username)/sizeof(username[0]);
		for(int i=0;i<length;i++){
			if(username[i]==name[i] && password==1234){
				 count++;
			}
		}
		if(count==length){
			printf("login successful");
		}
		else{
			printf("login fail");
		}
	}
