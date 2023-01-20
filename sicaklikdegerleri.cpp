#include<stdio.h>


int main() {
	
	int temp;
	
	printf("Su an disardaki sicaklik nedir?: ");
	scanf("%d",&temp);
	
	if(temp < 0) {
		
		printf("Freezing Weather!");
		
	}
	
	else if(temp < 10 && temp > 0) {
		
		printf("Very Cold Weather!");
		
	}
	
	else if(temp < 20 && temp > 10) {
		
		printf("Cold Weather");
		
	}
	
		else if(temp < 30 && temp > 20) {
		
		printf("Normal in Temp!");
		
	}
	
		else if(temp < 40 && temp > 30) {
		
		printf("Its hot!");
		
	}
	
	else {
		
		printf("Its Very Hot!");
		
	}
	
	

	return 0;
}
