#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int i,toplam;
	toplam=0;
	
	for(i=1;i<=41;i+=4)
	{
		toplam=toplam+i;
		printf(" + %d",i);
	}
	printf("\nToplam degeri: %d",toplam);
	
	
	
	
	
	
	
	return 0;
}
