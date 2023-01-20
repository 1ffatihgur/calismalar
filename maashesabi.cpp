#include<stdlib.h>
#include<stdio.h>

int main() {
	
	float maas,yenimaas;
	maas = 2500;
	
	printf("Maasiniz: ");
	scanf("%f",&maas);
	
	yenimaas = maas +maas*12/100;
	printf("Zam sonrasi yeni maasiniz: %f",yenimaas);
	
	
	
	return 0;
}
