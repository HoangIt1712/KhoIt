#include <stdio.h>

int main() {
    char kyTu;
    printf("Nh?p vào m?t ch? trong hàng Alphabet (Z->A, a->z) ho?c s? (0-9): ");
    scanf("%c", &kyTu); // Ð?c m?t k? t? t? bàn phím

    if (kyTu >= 'A' && kyTu <= 'Z') {
        printf("K? t? '%c' là ch? hoa!\n", kyTu);
    } else if (kyTu >= 'a' && kyTu <= 'z') {
        printf("K? t? '%c' là ch? thý?ng!\n", kyTu);
    } else if (kyTu >= '0' && kyTu <= '9') {
        printf("K? t? '%c' là ch? s?!\n", kyTu);
    } else {
        printf("K? t? '%c' không ph?i là ch? hoa, ch? thý?ng, ho?c ch? s?!\n", kyTu);
    }

    return 0;
}

