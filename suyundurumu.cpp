#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	
	printf("******SUYUN DURUMU******");
	printf("\n\n");
	
	int suderece;
	
	printf("Suyun Kac Derece Oldugunu Giriniz: ");
	scanf("%d",&suderece);
	
	if(suderece<=0)
	{
		printf("Su buz halinde.");
	}
	if(suderece>0 && suderece<100)
	{
		printf("Su sivi halde.");
	}
	if(suderece>=100)
	{
		printf("Su gaz halinde.");
	}
	
	
	
	
	return 0;
}
