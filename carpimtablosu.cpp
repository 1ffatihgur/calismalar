#include<stdio.h>


int main() {
	
	int i,n;
	int carpim;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&n);
	
	for(i = 1 ; i < 11 ; i++){
		
		carpim = n*i;
		printf("\n%d X %d = %d\n",i,n,carpim);
		
		
	}
	
	
	
	return 0;
}
