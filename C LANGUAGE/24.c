//24. Write a program to remove whitespace from both ends of a string.
#include <stdio.h>

int main () {
	char str[] = " H el lo " ;
	int len = strlen(str) ;
	printf ("%s \n" , str) ; //just to check if space is removing or not
	
	int i ;
	for (i = 0 ; i < len ; i++ ) {
		if (str[i] != 32) {
			printf ("%c",str[i]) ;
		}
	}
	
	return 0 ;
}
