#include<stdio.h>


int main() {
	
	int n,i; 
	int sum=0; 
	
	printf("Enter a natural number 'i': ");
	scanf("%d",&n);
	
	for(i = 1 ; i < n ; i++) {
		
		printf("i: %d\n",i);
		sum += i;
		
	}
	
	printf("\nToplamlari: %d",sum);
	
	
	
	
	
	
	return 0;
}
