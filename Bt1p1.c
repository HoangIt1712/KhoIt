#include <stdio.h>

int main() {
    char kyTu;
    printf("Nh?n m?t nút b?t k?: ");
    kyTu = getchar(); // Ð?c m?t k? t? t? bàn phím

    printf("M? ASCII c?a %c là: %d\n", kyTu, kyTu);
    return 0;
}

