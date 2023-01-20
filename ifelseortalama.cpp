#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	
	printf("OGRENCI ORTALAMA HESAPLAMA SISTEMI");
	printf("\n\n");
	
	int s1,s2,ort;
	
	printf("Birinci sinav notunuz: ");
	scanf("%d",&s1);
	
	printf("Ikinci sinav notunuz: ");
	scanf("%d",&s2);
	
	ort = (s1+s2)/2;
	
	printf("Ortalamaniz: %d\n",ort);
	
	if(ort>=50)
	{
		printf("TEBRIKLER GECTINIZ :)");
	}
	else
	{
		printf("MAALESEF KALDINIZ :(");
	}
	
	
	return 0;
}
