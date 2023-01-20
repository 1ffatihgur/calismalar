#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int dizi[100];
	int i,sayi,toplam,ort;
	
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++)
	{
		printf("Dizinin %d. elemaninini giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<sayi;i++)
	{
		toplam=dizi[100]; 
		printf("%d ",dizi[i]);
		printf("\nGirdiginiz sayilarin toplamý: %d'dir.",toplam);
	}
	
	
	
	
	return 0;
}
