#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int sayi;
	
	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1: printf("PAZARTESI");
		break;
		
		case 2: printf("SALI");
		break;
		
		case 3: printf("CARSAMBA");
		break;
		
		case 4: printf("PERSEMBE");
		break;
		
		case 5: printf("CUMA");
		break;
		
		case 6: printf("CUMARTESI");
		break;
		
		case 7: printf("PAZAR");
		break;
		
		default: printf("Hatali giris yaptiniz...");
		break;
	}
	
	return 0;
}
