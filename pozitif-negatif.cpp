#include<stdio.h>


int main() {
	
	int number1;
	
	printf("Please enter a number: ");
	scanf("%d",&number1);
	
	if (number1 > 0) {
		
		printf("%d is a positive number.",number1);
		
	}
	
	else if (number1 == 0) {
		
		printf("%d is zero.",number1);
		
	}
	
	else {
		
		printf("%d is a negative number.",number1);
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
