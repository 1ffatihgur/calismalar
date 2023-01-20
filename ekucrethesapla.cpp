#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int normalbagaj,normalel,bagaj,el,toplam;
	int bagajfark,elfark;
	int bagajucret,elucret;
	
	normalbagaj = 15;
	normalel = 8;
	bagaj = 18 ;
	el = 9 ; 
	
	bagajucret = (bagaj - normalbagaj)*5;
	bagajfark = bagaj - normalbagaj;
	printf("Bagaj fazlaniz: %d\n",bagajfark);
	printf("Ek bagaj ucreti: %d\n",bagajucret);
	
	elucret = (el - normalel)*5;
	elfark = el - normalel;
	printf("El fazlaniz: %d\n",elfark);
	printf("Ek el ucreti: %d\n",elucret);
	
	toplam = elucret+bagajucret;
	printf("Toplam odenecek tutar: %d",toplam);
	
	
	
	
	
	
	
	return 0;
}
