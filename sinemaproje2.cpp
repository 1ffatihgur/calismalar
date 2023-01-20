#include <stdlib.h>
#include <stdio.h>

int main() {
	
	int misir,cola,su,bilet,toplam;
	
	printf("Almis oldugunuz misir adedini giriniz: ");
	scanf("%d",&misir);
	
	printf("Almis oldugunuz cola adedini giriniz: ");
	scanf("%d",&cola);
	
	printf("Almis oldugunuz su adedini giriniz: ");
	scanf("%d",&su);
	
	printf("Almis oldugunuz bilet adedini giriniz: ");
	scanf("%d",&bilet);
	
	toplam = (misir*2) + (cola*2) + (su*1) + (bilet*8);
	printf("Odenecek toplam tutar: %d TL'dir.",toplam);
	
	
	return 0;
}
