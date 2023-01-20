#include<stdio.h>


int main() {
	
	int yas;
	int oyyasi;
	
	oyyasi = 18;
	
	printf("Yasinizi giriniz: ");
	scanf("%d",&yas);
	
	if(yas < 18) {
		
		printf("Uzgunuz, oyunuzu kullanmak için yasiniz yetersiz...\n");
		printf("Oyunuzu %d yil sonra kullanabileceksiniz.",oyyasi-yas);
		
	}
	
	else {
		
		printf("Tebrikler! Oyunuzu kullanabilirsiniz...");
	}
	
	
	
	
	
	
	
	
	return 0;
}
