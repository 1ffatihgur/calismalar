#include <stdio.h>



int main() {
	
	float a;
	float b;
	float c; 
	float d;
	float e;
	float aritmetikorta;
	
	
	printf("Lutfen bir 'a' sayisi giriniz: ");
	scanf("%f",&a);
	
	printf("Lutfen bir 'b' sayisi giriniz: ");
	scanf("%f",&b);
	
	printf("Lutfen bir 'c' sayisi giriniz: ");
	scanf("%f",&c);
	
	printf("Lutfen bir 'd' sayisi giriniz: ");
	scanf("%f",&d);
	
	printf("Lutfen bir 'e' sayisi giriniz: ");
	scanf("%f",&e);

	aritmetikorta = (a+b+c+d+e) / 5;
	
	printf("Sayilarin aritmetik ortalamasý %.2f'dir.",aritmetikorta);



	
	
	
	
	
	return 0;
}
