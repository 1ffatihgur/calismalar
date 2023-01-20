#include<stdio.h>


int main() {
	
	int i,n;
	int carpim;
	printf("Bri sayi giriniz: ");
	scanf("%d",&n);
	
	for(i = 1 ; i < n ; i++) {
		
		carpim = i*n;
		
		printf("%d X %d = %d",i,n,carpim);
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
