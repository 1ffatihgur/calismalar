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
	
	
	//pow fonksiyonu �s almak i�in kullan�l�r. pow(sayi1,sayi2) �eklindedir. �lk girilen say� taban, ikinci girilen say�
	//�st�r. Karek�k almak i�inse sqrt() fonk kullan�l�r. Grililen say�n�n karek�k�n� hesaplar.
	
	
	return 0;
}
