#include <stdio.h>

int main() {
    char kyTu;
    printf("Nh?p v�o m?t ch? trong h�ng Alphabet (Z->A, a->z) ho?c s? (0-9): ");
    scanf("%c", &kyTu); // �?c m?t k? t? t? b�n ph�m

    if (kyTu >= 'A' && kyTu <= 'Z') {
        printf("K? t? '%c' l� ch? hoa!\n", kyTu);
    } else if (kyTu >= 'a' && kyTu <= 'z') {
        printf("K? t? '%c' l� ch? th�?ng!\n", kyTu);
    } else if (kyTu >= '0' && kyTu <= '9') {
        printf("K? t? '%c' l� ch? s?!\n", kyTu);
    } else {
        printf("K? t? '%c' kh�ng ph?i l� ch? hoa, ch? th�?ng, ho?c ch? s?!\n", kyTu);
    }

    return 0;
}

