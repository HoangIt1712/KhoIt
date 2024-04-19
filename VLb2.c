#include <stdio.h>
int main()	{
	int a, b, t;
	printf("Moi ban nhap 1 so nguyen duong bat ki: \n");
	scanf("%d", &a);
	for(; a > 0; a /= 10 ) {
		b = a % 10;
		t += b; 
	}
	printf("Tong cac chu so la: %d", t);
	return 0; 
}
