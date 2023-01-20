#include<stdio.h>


int main() {
	
	int i,n;
	int kup;
	

	
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	
	
	for(i = 1 ; i < n ; i++) {
		
		kup = i*i*i;
		printf("\nSayi: %d ve kup: %d\n",i,kup);
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
