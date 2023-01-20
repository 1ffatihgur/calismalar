#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int kenar,cevre,alan;
	kenar = 6;
	cevre = 3*kenar;
	alan = (pow(kenar,2) * sqrt(3))/4;
	printf("Cevre: %d\n",cevre);
	printf("Alan: %d",alan);
	
	
	//pow fonksiyonu üs almak için kullanýlýr. pow(sayi1,sayi2) þeklindedir. Ýlk girilen sayý taban, ikinci girilen sayý
	//üstür. Karekök almak içinse sqrt() fonk kullanýlýr. Grililen sayýnýn karekökünü hesaplar.
	
	
	return 0;
}
