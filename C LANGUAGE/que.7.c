//7. Write a function that simulates a traffic light system. 
#include<stdio.h>
void signal(char signal[]){
		if(signal=="red"){
		printf("STOP");
	}
	else if(signal=="yellow"){
		printf("SLOW DOWN");
	}
	else{
		printf("GO");
	}

}
int main(){
signal("red");
}	


