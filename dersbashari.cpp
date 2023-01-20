#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	char dersharf;
	
	printf("Turkce --> T\n");
	printf("Matematik --> M\n");
	printf("Sosyal Bilimler --> S\n");
	printf("Fen Bilimleri --> F\n");
	
	printf("Lutfen ders bas harfini giriniz: ");
	scanf("%s",&dersharf);
	
	switch(dersharf)
	{
		case 'T': printf("TURKCE");
		break;
		
		case 'M': printf("MATEMATIK");
		break;
		
		case 'S': printf("SOSYAL BILIMLER");
		break;
		
		case 'F': printf("FEN BILIMLERI");
		break;
		
		default: printf("Yanlis giris yaptiniz...");
		break;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
