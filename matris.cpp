#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	
	int matris[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",matris[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}