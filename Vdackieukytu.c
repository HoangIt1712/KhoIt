#include <stdio.h>

int main(){
    // Ki?u s? nguy�n
    int integerVar = 10;
    printf("Ki?u s? nguy�n: %d\n", integerVar);

    // Ki?u s? th?c
    float floatVar = 3.14;
    printf("Ki?u s? th?c: %.2f\n", floatVar);

    // Ki?u k? t?
    char charVar = 'A';
    printf("Ki?u k? t?: %c\n", charVar);

    // Ki?u Boolean (s? d?ng ki?u int)
    int boolVar = 1; // 1 l� true, 0 l� false
    printf("Ki?u Boolean: %d\n", boolVar);

    // Ki?u chu?i k? t? (m?ng c�c k? t?)
    char stringVar[] = "Hello, world!";
    printf("Ki?u chu?i k? t?: %s\n", stringVar);
   
    return 0;
}

