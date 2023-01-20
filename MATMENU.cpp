#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int islem,sonuc,karekok;
	int a,b,x,pi,yaricap;
	int alan,cevre,kup;
	
	printf("********************\n\n");
	
	printf("MATEMATIK MENUSUNE HOSGELDINIZ\n\n");
	printf("----ISLEMLERIMIZ----\n");
	printf("1- Karede Alan ve Cevre Hesabi Islemi\n");
	printf("2- Girilen Sayininin Kupunun Bulunma Islemi\n");
	printf("3- Cemberde Alan ve Cevre Hesabi Islemi\n");
	printf("4- 5x2 + 7x + 9 Isleminin x'e Gore Sonucunun Bulunmasý Islemi\n");
	printf("5- Dikdortgende Alan ve Cevre Hesabi Islemi\n");
	printf("6- Girilen Iki Sayida Us Hesabi Yapma Islemi\n");
	printf("7- Girilen Sayinin Karekokunu Alma Islemi\n\n");
	
	printf("********************\n\n");
	
	
	printf("Lutfen islem numarasini seciniz: ");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1: 
		printf("Lutfen karenin bir kenarini giriniz: ");
		scanf("%d",&a);
		alan = pow(a,2);
		cevre = 4*a;
		printf("Karenin alani %d'dir.\n",alan);
		printf("Karenin cevresi %d'dir.\n",cevre);
		break;
		
		case 2: 
		printf("Lutfen kupunu almak istediginiz sayiyi giriniz:");
		scanf("%d",&b);
		kup = pow(b,3);
		printf("Girmis oldugunuz sayinin kupu %d'dir.",kup); 
		break;
		
		case 3: 
		printf("Lutfen cemberin yaricapini giriniz:");
		scanf("%d",&yaricap);
		pi = 3;
		alan = pi*pow(yaricap,2);
		cevre = 2*pi*yaricap;
		printf("Cemberin alani %d'dir.\n",alan);
		printf("Cemberin cevresi %d'dir.\n",cevre);
		break;
		
		case 4: 
		printf("5x2 + 7x + 9 islemi icin x sayisi giriniz:");
		scanf("%d",&x);
		sonuc = 5*x*x + 7*x + 9;
		printf("Girdiginiz x degerine göre islem sonucu %d'dir.",sonuc);
		break;
		
		case 5:
		printf("Lutfen dikdortgenin kisa kenarini giriniz: ");
		scanf("%d",&a);
		printf("Lutfen dikdörtgenin uzun kenarini giriniz: ");
		scanf("%d",&b);
		printf("Girmis oldugunuz kenarlar %d ve %d'dir.\n",a,b);
		alan = a*b;
		cevre = 2*(a+b);
		printf("Buna gore dikdortgenin alani %d ve cevresi %d'dir.\n",alan,cevre);
		break; 
		
		case 6: 
		printf("Us isleminde taban olacak sayiyi giriniz: ");
		scanf("%d",&a);
		printf("Us isleminde us olacak sayiyi giriniz: ");
		scanf("%d",&b);
		printf("Taban olan sayi %d ve us olan sayi %d'dir.\n",a,b);
		sonuc = pow(a,b);
		printf("Girmis oldugunuz degerlere gore sonucunuz %d'dir.",sonuc);
		break;
		
		case 7:
		printf("Karekokunu almak istediginiz sayiyi giriniz: ");
		scanf("%d",&a);
		karekok = sqrt(a);
		printf("Girdiginiz sayinin karekoku %d'dir.",karekok);
		break;
		
	}

	return 0;
}
