#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int sayilar[]={1,2,3,4,5,6,7};
	int faktor=1;
	int i;
	
	for(i=0;i<7;i++)
	{
		faktor=faktor*sayilar[i];
	}
	printf("faktoriyel degeri: %d",faktor);
	
	
	return 0;
}
