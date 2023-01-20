#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float arasinav,final,lab,kitap,katilim,toplam;
	
	lab = 90;
	katilim = 90;
	kitap = 80;
	arasinav = 84;
	final = 50;
	
	toplam = (lab*10/100) + (katilim*5/100) + (kitap*5/100) + (arasinav*30/100) + (final*50/100);
	printf("Notunuz: %f",toplam);
	
	
	
	return 0;
}
