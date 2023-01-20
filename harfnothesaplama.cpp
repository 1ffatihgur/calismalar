#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	printf("******HARF NOTU HESAPLAMA PROGRAMI******\n\n");
	
	int s1,s2,s3,p1,ort;
	
	printf("Birinci Sinav puaninizi giriniz: ");
	scanf("%d",&s1);
	
	printf("Ikinci Sinav puaninizi giriniz: ");
	scanf("%d",&s2);	
	
	printf("Ucuncu Sinav puaninizi giriniz: ");
	scanf("%d",&s3);
	
	printf("Proje Sinav puaninizi giriniz: ");
	scanf("%d",&p1);
	
	ort = (s1+s2+s3+p1)/4;
	printf("Ortalamaniz: %d\n",ort);
	
	if(ort<50)
	{
		printf("Harf notunuz 'FF'");
	}
	
	if(ort>50 && ort<60)
	{
		printf("Harf Notunuz 'DD'");
	}
	
	if(ort>60 && ort<70)
	{
		printf("Harf Notunuz 'CC'");
	}
	
	if(ort>70 && ort<85)
	{
		printf("Harf Notunuz 'BB'");
	}
	
	if(ort>85)
	{
		printf("Harf Notunuz 'AA'");
	}

	return 0;
}
