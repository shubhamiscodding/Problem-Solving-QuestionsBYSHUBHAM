//38. Given a temperature in Celsius, convertit to Fahrenheit.
#include<stdio.h>
int main(){
	int celsius;
	printf("Enter celsius value:");
	scanf("%d",&celsius);
	int fahrenheit = celsius*(9/5)+32;
	printf("celsius = %d " "fahrenheit = %d",celsius,fahrenheit);
}
