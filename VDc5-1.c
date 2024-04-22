#include <stdio.h>
void main(){
	int a, b;
	b = 0;
	do
	{
		printf("\n Nhap mot so : ");
		 scanf("%d", a);
		 printf(" No. is %d", a);
		 b++; 
	 } while (a != 0);
	 printf ("\n the total number entered were %d", --b);
} 
