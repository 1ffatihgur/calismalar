#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	
	float yaricap,pi,cevre,alan;
	pi = 3.14;
	
	printf("Cemberin yaricapini giriniz: ");
	scanf("%f",&yaricap);
	
	cevre = 2*pi*yaricap;
	printf("Cemberin yaricapi: %f\n",cevre);
	
	alan = pi*pow(yaricap,2);
	printf("Cemberin Alani: %f",alan);
	
	
	return 0;
}
