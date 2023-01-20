#include<stdio.h>


int main() {
	
	int i;
	int toplam = 0;
	
	printf("The first 10 natural number is: \n");
	
	for(i = 1 ; i < 11 ; i++) {
		
		printf("%d\n",i);
		toplam += i;
		
	}

	printf("Toplamlari: %d\n\n ",toplam);
	
	
	
	
	
	
	
	
	return 0;
}
