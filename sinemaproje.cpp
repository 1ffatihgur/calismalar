#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int misir,cola,su,bilet;
	int misiradet,colaadet,suadet,biletadet;
	int misirtop,colatop,sutop,bilettop;
	int toplamucret;
	
	misir = 2;
	cola = 2; 
	su = 1;
	bilet = 8;
	
	misirtop = (misir * misiradet);
	printf("Aldiginiz misir adedini giriniz: ");
	scanf("%d",&misiradet);
	printf("Odenecek misir ucreti: %d\n",misirtop);
	
	colatop = cola * colaadet;
	printf("Aldiginiz cola adedini giriniz: ");
	scanf("%d",&colaadet);
	printf("Odenecek cola ucreti: %d\n",colatop);
	
	sutop = su * suadet;
	printf("Aldiginiz su adedini giriniz: ");
	scanf("%d",&suadet);
	printf("Odenecek su ucreti: %d",sutop);
	
	bilettop = bilet * biletadet;
	printf("Aldiginiz bilet adedini giriniz: ");
	scanf("%d",&biletadet);
	printf("Odenecek bilet ucreti: %d",bilettop);
	
	toplamucret = bilettop + sutop + colatop + misirtop;
	printf("Odeyeceginiz toplam ucret: %d",toplamucret);
	
	
	
	
	
	return 0;
}
