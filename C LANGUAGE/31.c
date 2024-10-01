#include<stdio.h>
int main(){
	int num=5;
	char str[]="string";
	int i;
	int j;
	for(i=0;i<num;i++){
		for(j=0;j<strlen(str);j++){
			printf("%c",str[j]);
		}
	}
}
