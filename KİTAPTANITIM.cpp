#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char kitapadi[20], kitapyazari[10], sayfasayisi[2], basimtarihi[4], basimevi[30], kitapturu[10];
	
	printf("******** KITAP TANITIM ********\n\n\n");
	
	printf("Kitabin adini giriniz: ");
	scanf("%s",&kitapadi);
	
	printf("Kitabin yazarini giriniz: ");
	scanf("%s",&kitapyazari);
	
	printf("Kitabin sayfa sayisini giriniz: ");
	scanf("%s",&sayfasayisi);
	
	printf("Kitabin basim tarihini giriniz: ");
	scanf("%s",&basimtarihi);
	
	printf("Kitabin basim evini giriniz: ");
	scanf("%s",&basimevi);
	
	printf("Kitabin Turunu giriniz: ");
	scanf("%s",&kitapturu);
	
	printf("\n\n");
	
	printf("Kitabin Adi: %s  -  Kitabin Yazari: %s\n",kitapadi,kitapyazari );
	printf("Kitabin Sayfa Sayisi: %s  -  Kitabin Turu: %s\n",sayfasayisi,kitapturu);
	printf("Kitabin Basim Yili: %s  -  Kitabin Basim Yeri: %s\n\n\n",basimtarihi,basimevi);
	
	printf("******************************");
	
	
	
	
	
	return 0;
}
