#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int i,j;
	int faktor=1;

	printf("Lutfen bir sayi giriniz: ");
	scanf("%d",&j);
	
	for(i=1;i<=j;i++)
	{
		faktor=faktor*i;
	}

	printf("%d sayisinin faktoriyeli: %d'dir.",j,faktor);




	return 0;
}
