#include <stdio.h>

int main() {
    int A, B, C, Max;
    printf("Nh?p v�o ba s? A, B, C: ");
    scanf("%d %d %d", &A, &B, &C); // �?c ba s? t? b�n ph�m

    Max = A; // Gi? s? A l� s? l?n nh?t
    if (B > Max) {
        Max = B; // N?u B l?n h�n, c?p nh?t Max l� B
    }
    if (C > Max) {
        Max = C; // N?u C l?n h�n, c?p nh?t Max l� C
    }

    printf("Gi� tr? l?n nh?t l�: %d\n", Max);
    return 0;
}

