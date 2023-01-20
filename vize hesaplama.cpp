#include<stdio.h>


int main() {
	
	int vize1,vize2,final;
	float dersorta;
	
	
	printf("1. Vize puaninizi giriniz: ");
	scanf("%d",&vize1);
	
	printf("2. Vize puaninizi giriniz: ");
	scanf("%d",&vize2);
	
	printf("Final puaninizi giriniz: ");
	scanf("%d",&final);
	
	dersorta = (vize1 + vize2 + final) / 3.0;
	
	
	if(dersorta > 60) {
		
		printf("Dersten gectiniz!");
		
	}
	
	else if (dersorta > 50 && dersorta < 60) {
		
		printf("Dersten bute kaldiniz!");
		
	}
	
	
	else {
		
		printf("Dersten kaldiniz!");
		
		 
	}
	
	
	return 0;
}
