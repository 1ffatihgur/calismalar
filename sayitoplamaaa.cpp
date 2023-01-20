#include<stdio.h>	


int main() {
	
	int toplam;
	int i;
	
	for(i=0 ; i<=10 ; i++) {
		
		int x;
		printf("Bir sayi gir: ");
		scanf("%d",&x);
		
		toplam += x;
		
		
	}
	
	printf("Sayilarin toplami %d",toplam);
	
	
	
	
	
	
	
	
	return 0;
}
