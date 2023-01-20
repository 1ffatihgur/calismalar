#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int sayi;
	int birler,onlar,yuzler; 
	
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	
	yuzler=sayi/100;
	
	onlar=sayi/10;
	onlar=onlar%10;
	
	birler=sayi%10;
	
	printf("%d\n",yuzler);
	printf("%d\n",onlar);
	printf("%d\n",birler);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
