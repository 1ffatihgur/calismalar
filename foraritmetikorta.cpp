#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int i;
	int toplam=0;
	
	int sayilar[5];
	
	for(i=0;i<5;i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%d",&sayilar[i]);
	}
	
	for(i=0;i<5;i++)
	{
		toplam += sayilar[i];
	}
	printf("Girmis oldugunuz sayilarin aritmetik ortalamasi %d'dir.",toplam/5);
	
	
	
	
	
	
	return 0;
}
