//35. Print an inverted right-angled triangle pattern with n rows.
#include<stdio.h>
int main(){
	int i;
	int j;
	int k;
	int n=5;
	for(j=n;j>0;j--){
		for(k=0;k<n-j;k++){
			printf("  ");
		}
		for(i=0;i<j;i++){
			printf("* ");
		}
	printf("\n");
	}	
}

  



