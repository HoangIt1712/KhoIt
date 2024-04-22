#include <stdio.h>
void main(){
	char arr[26];
	int i, j;
	for(i = 65, j = 0; i < 91; i++, j++){
		arr[i] = i;
		printf(" %c", arr[i]);
	}
	
} 
