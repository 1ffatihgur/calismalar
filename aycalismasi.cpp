#include<stdio.h>


int main() {
	
	int number;
	
	printf("Please enter a month number (1-12): ");
	scanf("%d",&number);
	
	switch(number) {
		
		case 1 :
			
			printf("The month is 'JANUARY'\nd");
			printf("Total number of days '31' ");
			break;
		case 2 :
			
			printf("The month is 'FEBRUARY'\n");
			printf("Total number of days '28 or 29' ");
			break;
			
		case 3 :	
			
			printf("The month is 'MARCH'\n");
			printf("Total number of days '31' ");
			break;
		
		case 4 :
			
			printf("The month is 'APRIL'\n");
			printf("Total number of days '30' ");
			break;
		
		case 5 :	
		
			printf("The month is 'MAY'\n");
			printf("Total number of days '31' ");
			break;
		
		case 6 :	
		
			printf("The month is 'JUNE'\n");
			printf("Total number of days '30' ");
			break;
		
		case 7 :	
		
			printf("The month is 'JULY'\n");
			printf("Total number of days '30' ");
			break;
		
		case 8 :	
			
			printf("The month is 'AUGUST'\n");
			printf("Total number of days '31' ");
			break;
		
		case 9 :	
		
			printf("The month is 'SEPTEMBER'\n");
			printf("Total number of days '31' ");
			break;
			
		case 10 :	
		
			printf("The month is 'OCTOBER'\n");
			printf("Total number of days '31' ");
			break;
		
		case 11 :	
		
			printf("The month is 'NOVEMBER'\n");
			printf("Total number of days '30' ");
			break;
		
		case 12 :	
		
			printf("The month is 'DECEMBER'\n");
			printf("Total number of days '31' ");
			break;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
