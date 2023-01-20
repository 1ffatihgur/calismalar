#include<stdio.h>


int main() {
	
	int gunsayi;
	
	printf("(1-7)'ye kadar bir sayi giriniz: ");
	scanf("%d",&gunsayi);
	
	switch(gunsayi) {
		
		case 1 :
			
			printf("Girdiginiz numaraya tkabul eden gun 'PAZARTESI'dir.");
			break;
		
		case 2 :
			
			printf("Girdiginiz numaraya tkabul eden gun 'SALI'dir.");
			break;
			
		case 3 :
			
			printf("Girdiginiz numaraya tkabul eden gun 'CARSAMBA'dir.");
			break;
		
		case 4 :
			
			printf("Girdiginiz numaraya tkabul eden gun 'PERSEMBE'dir.");
			break;
		
		case 5 :
			
			printf("Girdiginiz numaraya tkabul eden gun 'CUMA'dir.");
			break;
		
		case 6 : 
		
			printf("Girdiginiz numaraya tkabul eden gun 'CUMARTESI'dir.");
			break;
		
		case 7 :
		
			printf("Girdiginiz numaraya tkabul eden gun 'PAZAR'dir.");
			break;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
