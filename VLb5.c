#include <stdio.h>

int main() {
    int num, result = 0;

    // V?ng l?p vô h?n ð? nh?p s? và ki?m tra ði?u ki?n
    while (1) {
        printf("Nhap mot so: ");
        scanf("%d", &num);

        // Ki?m tra n?u s? n?m trong kho?ng t? 1 ð?n 10
        if (num > 1 && num < 100) {
            result++; // Tãng bi?n ð?m k?t qu?
            printf("Result: %d\n", result);
        } else {
            // N?u s? không th?a m?n, in k?t qu? cu?i cùng và thoát chýõng tr?nh
            printf("Final Result: %d\n", result);
            break;
        }
    }

    return 0;
}

