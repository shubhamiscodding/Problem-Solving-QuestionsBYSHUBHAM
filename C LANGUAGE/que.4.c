//4. Write a function to check whether a given character is a vowel or consonant.
#include<stdio.h>
#include<string.h>
int main(){
	char character[]="a";
	char str[]="a,e,i,o,u";
	int vowel=0;
	for(int i=0;i<strlen(str);i++){
		if(character[0]==str[i]){
			vowel++;
		}
	}
	if(vowel>0){
		printf("vowel");
	}
	else{
		printf("consonant");
	}
}
