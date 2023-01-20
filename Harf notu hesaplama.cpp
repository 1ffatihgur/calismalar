#include<stdio.h>


int main() {
	
	int vize1,vize2,final;
	float okulortalama;
	float dersort;
	
	printf("1. Vize puaninizi giriniz: ");
	scanf("%d",&vize1);
	printf("2. Vize puaninizi giriniz: ");
	scanf("%d",&vize2);
	printf("Final puaninizi giriniz: ");
	scanf("%d",&final);
	printf("Okul ortalamanizi giriniz: ");
	scanf("%d",&okulortalama);
	
	dersort = (vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);
	
	
	if (dersort > 90) {
		
		printf("Harf notunuz -- AA'dir ve Ders Ortalamaniz : %f ",dersort);
		
	}
	
	else if (dersort > 85 && dersort < 90) {
		
		printf("Harf notunuz -- BA'dir ve Ders Ortalamaniz :  %f ",dersort);
		
	}
	
	else if (dersort > 80 && dersort < 85) {
		
		printf("Harf notunuz -- BB'dir ve Ders Ortalamaniz: %f ",dersort);
		
	}
	
	else if (dersort > 75 && dersort < 80) {
		
		printf("Harf notunuz -- CB'dir ve Ders Ortalamaniz: %f ",dersort);
		
	}
	
	else if (dersort > 70 && dersort < 75) {
		
		printf("Harf notunuz -- CC'dir ve Ders Ortalamaniz: %f \n",dersort);
		if (okulortalama < 2.5) {
			
			printf("Dersi seneye tekrar almalisin çunku okul ortalaman çok dusuk!");
			
		}
	}
	
	
	else if (dersort > 65 && dersort < 70) {
		
		printf("Harf notunuz -- DC'dir ve Ders Ortalamaniz: %f \n",dersort);
		if (okulortalama < 2.5) {
			
			printf("Dersi seneye tekrar almalisin çunku okul ortalaman çok dusuk!");
			
		}
	}
	
	
	else if (dersort > 60 && dersort < 65) {
		
		printf("Harf notunuz -- DD'dir ve Ders Ortalamaniz: %f \n",dersort);
		if (okulortalama < 2.5) {
			
			printf("Dersi seneye tekrar almalisin çunku okul ortalaman çok dusuk!");
			
		}
	}
	
	else {
		
		printf("Harf notunuz FF'dir ve DERSTEN KALDINIZ!\n");
		printf("Ders Ortalamaniz: %f",dersort);
	}
	
	return 0;
}
