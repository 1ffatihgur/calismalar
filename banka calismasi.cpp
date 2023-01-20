#include<stdio.h>


int main() {
	
	int bakiye=1000;
	int tutar;
	int islem;
	

	printf("Yapilacak islem numarasini giriniz: \nIslem 1: Bakiye Sorgulama\nIslem 2: Para Cekme\nIslem 3: Para yatirma\nIslem 4: Havale Yapma\nIslem 5: Kart Iade\n\n\n");
	printf("Islem Numarasini Giriniz: ");
	scanf("%d",&islem);
	
	switch(islem) {
		
		case 1 :
			
			printf("Bakiyeniz: %d",bakiye);
			break;
			
		case 2 :
			
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Cekilecek Tutari giriniz: ");
			scanf("%d",&tutar);
			if(tutar > bakiye) {
				
				printf("Bakiye Yetersiz!");
				break;
			}
			bakiye -= tutar;
			printf("Para cekme islemi tamamlanmistir!\n");
			printf("Yeni bakiyeniz: %d",bakiye);
			break;
			
		case 3 : 
		
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Yatirilacak Tutari giriniz: ");
			scanf("%d",&tutar);
				
			bakiye += tutar;
			printf("Para yatirma islemi tamamlanmistir!\n");
			printf("Yeni bakiyeniz: %d",bakiye);
			break;
			
		case 4 :
			
			printf("Bakiyeniz: %d\n",bakiye);
			printf("Havale yapilacak Tutari giriniz: ");
			scanf("%d",&tutar);
			if(tutar > bakiye) {
				
				printf("Bakiye Yetersiz!");
				break;
			}
			bakiye -= tutar;
			printf("Para havale islemi tamamlanmistir!\n");
			printf("Yeni bakiyeniz: %d",bakiye);
			break;
		
		case 5 :	
			
			printf("Kariniz Iade ediliyor...");
			break;
		
		default :
			
			printf("Belirlenemeyen islem...");
			break;
		
		
				
		
		
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
