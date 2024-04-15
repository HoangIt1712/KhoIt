#include <stdio.h>

int main() {
    int A, B, C, Max;
    printf("Nh?p vào ba s? A, B, C: ");
    scanf("%d %d %d", &A, &B, &C); // Ð?c ba s? t? bàn phím

    Max = A; // Gi? s? A là s? l?n nh?t
    if (B > Max) {
        Max = B; // N?u B l?n hõn, c?p nh?t Max là B
    }
    if (C > Max) {
        Max = C; // N?u C l?n hõn, c?p nh?t Max là C
    }

    printf("Giá tr? l?n nh?t là: %d\n", Max);
    return 0;
}

