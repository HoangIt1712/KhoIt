#include <stdio.h>

int main() {
    int num, result = 0;

    // V?ng l?p v� h?n �? nh?p s? v� ki?m tra �i?u ki?n
    while (1) {
        printf("Nhap mot so: ");
        scanf("%d", &num);

        // Ki?m tra n?u s? n?m trong kho?ng t? 1 �?n 10
        if (num > 1 && num < 100) {
            result++; // T�ng bi?n �?m k?t qu?
            printf("Result: %d\n", result);
        } else {
            // N?u s? kh�ng th?a m?n, in k?t qu? cu?i c�ng v� tho�t ch��ng tr?nh
            printf("Final Result: %d\n", result);
            break;
        }
    }

    return 0;
}

