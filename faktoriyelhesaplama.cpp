#include<stdio.h>


int main() {
	
	int i;
	int fact=1;
	
	printf("Faktoriyeli al�nacak sayiyi giriniz: ");
	scanf("%d",&i);
	
	while(i != 0) {
		printf("%d\n",i);
		fact = fact * i;
		i --;
		
	}
	printf("Faktoriyel : %d",fact);
	
	
	
	
	
	
	
	
	
	return 0;
}
