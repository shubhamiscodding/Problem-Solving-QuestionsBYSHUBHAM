//36. Print a pyramid pattern with n rows.
#include<stdio.h>
int main(){
	int i,j,k;
	int n=5;
	for(i=0;i<n;i++){
		for(j=n-k;j>=0;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("* ");
		}
		printf("\n");
	}
}
