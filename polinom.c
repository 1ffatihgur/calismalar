#include <stdio.h>


int main() {
	
	float kok1;
	float kok2;
	float delta;
	int a;
	int b;
	int c;
	
	printf("Lutfen bir 'a' sayisi giriniz: ");
	scanf("%d",&a);
	
	printf("Lutfen bir 'b' sayisi giriniz: ");
	scanf("%d",&b);
	
	printf("Lutfen bir 'c' sayisi giriniz: ");
	scanf("%d",&c);
	
	printf("Denkleminiz: %dx^2+%dx+%d\n",a,b,c);
	
	
	delta = b*b - 4 * a * c;
	printf("Deltaniz %.2f'dir.\n",delta);
	
	
	kok1 = (-b + delta*(1/2)) / 2;
	kok2 = (-b - delta*(1/2)) / 2;

	printf("Kokleriniz: %f  %f 'dir.",kok1,kok2);	
	
	
	
	
	
	
	
	return 0;
}
