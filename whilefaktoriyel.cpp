#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int i,sayi,fak;
	fak=1;
	
	printf("Lutfen sayi giriniz: ");
	scanf("%d",&sayi);
	
	i=1;
	while(i<=sayi)
	{
		printf("%d \n",i);
		fak=i*fak;
		i++;
		
	}
	
	printf("Faktoriyel carpimi: %d",fak);
	
	
	
	
	
	
	
	return 0;
}
