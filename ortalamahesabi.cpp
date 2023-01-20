#include <stdlib.h>
#include <stdio.h>

int main () {
	
	float s1,s2,s3,proje,toplam;
	
	printf("Birinci Sinav Notunuzu Giriniz: ");
	scanf("%f",&s1);
		
		
	printf("Ikinci Sinav Notunuzu Giriniz: ");
	scanf("%f",&s2);
	
		
	printf("Ucuncu Sinav Notunuzu Giriniz: ");
	scanf("%f",&s3);
	
		
	printf("Birinci Proje Notunuzu Giriniz: ");
	scanf("%f",&proje);
	
	toplam = (s1+s2+s3+proje)/4;
	printf("Ortalamaniz: %f'dir.",toplam);
	
	
	
	
	return 0;
}
