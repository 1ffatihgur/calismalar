#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	
	float turkce,mat,sosyal,fen,taban,toplampuan;
	
	taban=100.160;
	
	printf("Turkce Netiniz: ");
	scanf("%f",&turkce);
	
	printf("Matematik Netiniz: ");
	scanf("%f",&mat);
	
	printf("Sosyal Bilgiler Netiniz: ");
	scanf("%f",&sosyal);
	
	printf("Fen Bilgisi Netiniz: ");
	scanf("%f",&fen);
	
	toplampuan=turkce*1.999+mat*3.998+sosyal*1+fen*2.999+taban;
	printf("YGS - 1 Puan Turunden Sonucunuz: %f",toplampuan);
	
	
	
	return 0;
}
