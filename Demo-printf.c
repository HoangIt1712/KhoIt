#include <stdio.h>
void main(){
	printf("the number 555 in various forms:\n");
	printf("without any modifier: \n");
	printf("[%d]\n",555);
	printf("with - modifier :\n");
	printf("[%-d]\n",555);
	printf("with digit string 10 as modifile :\n");
	printf("[%10d]\n",555);
	printf("with 0 as modifile : \n");
	printf("[%0d]\n",555);
	printf("witch 0 and digit string 10 as modifile :\n");
	printf("[%010d]\n",555);
	printf("witch -' 0 and digit atring 10 as modifile: \n");
	printf("[%-010d]\n",555);
} 
