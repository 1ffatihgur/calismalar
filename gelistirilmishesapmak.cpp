#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	printf("******HESAP MAKINESI PROGRAMI******\n\n");
	
	printf("Yapmak istediginiz islem nedir?\n");
	printf("Toplama islemi yapmak icin '+' tusuna basiniz.\n");
	printf("Cikarma islemi yapmak icin '-' tusuna basiniz.\n");
	printf("Bolme islemi yapmak icin '/' tusuna basiniz.\n");
	printf("Carpma islemi yapmak icin 'x' tusuna basiniz.\n\n");
	
	
	int a,b;
	char giris;
	int topla,cikar,carp,bol;
		
	printf("Hangi islemi yapmak istersiniz?");
	scanf("%s",&giris);
	
	printf("Lutfen ilk sayiyi giriniz: ");
	scanf("%d",&a);
	printf("Lutfen ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	

	
	topla = a+b;
	cikar = a-b;
	carp = a*b;
	bol = a/b;
	
	switch(giris)
	{
		case '+': printf("%d + %d isleminin sonucu %d'dir.",a,b,topla);
		break;
		
		case '-': printf("%d - %d isleminin sonucu %d'dir.",a,b,cikar);
		break;
		
		case 'x': printf("%d x %d isleminin sonucu %d'dir.",a,b,carp);
		break;
		
		case '/': printf("%d / %d isleminin sonucu %d'dir.",a,b,bol);
		break;
		
		default: printf("Yanlis giris yaptiniz, tekrar deneyiniz...");
		break;
	}
	
	return 0;
}
