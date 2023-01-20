#include <stdio.h>


int main() {
	
	int a1 = 42;
	char b1 = 65;
	char b2 = 'b';
	float c1 = 12.4;
	double d1 = 132.2353462452;
	
	
	printf("%10d %c %c %.1f %.2f %s \n",a1,b1,b2,c1,d1,"Yazilim Bilimi");
	
	
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(int));
	printf("%d byte\n",sizeof(float));
	printf("%d byte\n",sizeof(short int));
	printf("%d byte\n",sizeof(long int));
	printf("%d byte\n",sizeof(double));
	printf("%d byte\n",sizeof(char));
	printf("%d byte\n",sizeof(char));
	
	return 0;
}
