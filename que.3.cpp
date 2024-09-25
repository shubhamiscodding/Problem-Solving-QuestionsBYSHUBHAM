//3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.
#include<stdio.h>
int main(){
	int tr1=60;
	int tr2=50;
	int tr3=40;
	if(tr1==tr2 && tr2==tr3){
		printf("equilateral");
	}
	else if(tr1==tr2 || tr2==tr3 || tr1==tr3){
		printf("isosceles");
	}
	else{
		printf("scalene");
	}
}
