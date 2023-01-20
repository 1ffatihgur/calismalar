#include<stdio.h>


int main() {
	
	int sayi1;
	int sayi2;
	int sayi3;
	
	
	printf("Lutfen 1. sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
		
	printf("Lutfen 2. sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
		
	printf("Lutfen 3. sayiyi giriniz: ");
	scanf("%d",&sayi3);
	
	
	if(sayi1 > sayi2 && sayi1 > sayi3) {
		
		printf("En buyuk sayi %d 'dir.",sayi1);
		
	}
	
	else if(sayi2 > sayi1 && sayi2 > sayi3) {
		
		printf("En buyuk sayi %d 'dir.",sayi2);
		
	}
	
	else {
		
		printf("En buyuk sayi %d 'dir.",sayi3);
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
