#include <stdio.h>

int main()
{
	int i;
	printf("Cac so chan tu 1 > 100 la: \n");
	for(i = 2; i <= 100; i += 2)
	{
		if(i % 20 == 2)
		printf("\n");
		printf(" %2d", i); 
	}
	return 1; 
} 
