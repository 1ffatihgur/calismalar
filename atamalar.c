#include <stdio.h>


int main()   {
	
	int x = 5;
	int y = 12;
	int a = 3;
	
	x = a;
	y = a + x + 5;
	
	printf("x:%d\ny:%d\na:%d\n",x,y,a);
	
	
	
	x = 3;
	y = 4;
	int z = 5;
	
	printf("x:%d  y:%d  z:%d\n",++x, --y, z++);
	printf("x:%d  y:%d  z:%d\n",x, y, z);
	printf("x:%d  y:%d  z:%d\n",--x, --y, z--);
	
	
	x = y = a + 4;
	printf("x: %d  y: %d  a: %d",x,y,a); 	 
	
	
	
	
	
	
	return 0;
}
