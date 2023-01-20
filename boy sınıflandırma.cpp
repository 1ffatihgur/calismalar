#include<stdio.h>


int main() {
	
	int boy;
	
	printf("Lutfen boyunuzu santimetre cinsinden yaziniz: ");
	scanf("%d",&boy);
	
	
	if(boy >= 200) {
		
		printf("Boyunuz cok uzun!");
		
	}
	
	else if(boy >= 180 && boy < 200) {
		
		printf("Boyunuz uzun!");
		
	}
	
	else if(boy >= 160 && boy < 180) {
		
		printf("Boyunuz normal!");
		
	}
	
	else {
		
		printf("Boyunuz kisa!");
		
	}
	
	
	
	
	
	
	return 0;
}
