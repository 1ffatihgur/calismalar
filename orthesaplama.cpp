#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int s1,s2,s3,p1,ortalama;
	
	
	printf("1. Sinav puaniniz: ");
	scanf("%d",&s1);
	printf("2. Sinav puaniniz: ");
	scanf("%d",&s2);
	printf("3. Sinav puaniniz: ");
	scanf("%d",&s3);
	printf("Proje puaniniz: ");
	scanf("%d",&p1);
	ortalama = (s1+s2+s3+p1)/4;	
	
	printf("Sinav sonuc ortalamaniz: %d",ortalama);
	
	
	return 0;
}
