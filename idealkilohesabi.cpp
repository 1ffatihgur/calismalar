#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float boy,yas,ideal;
	
	printf("Ideal boy ve kilo hesaplama programi\n\n");
	printf("Boyunuzu giriniz: ");
	scanf("%f",&boy);
	
	printf("Yasinizi giriniz: ");
	scanf("%f",&yas);
	
	ideal = ((boy - 100) + (yas / 10)) * 0.9;
	printf("Ideal kilonuz: %f",ideal);
	
	
	
	
	
	
	
	return 0;
}
