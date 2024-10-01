//30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.
#include<stdio.h>
int main(){
	int n=132456;
	int odd=0;
	int even=0;
	int rem=0;
      while(n>0){
      	rem=n%10;
      	if(rem%2==0){
      		even=even+rem;
		  }else{
		  	odd=odd+rem;
		  }
		  n=n/10;
	  }
	  printf("%d\n",even);
	  printf("%d\n",odd);

}


