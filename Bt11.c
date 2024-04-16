#include <stdio.h>

int main() {
    float num1, num2;
    char phepToan;
    printf("Nh?p vào s? th? nh?t: ");
    scanf("%f", &num1);
    printf("Nh?p vào s? th? hai: ");
    scanf("%f", &num2);
    printf("***************\n");
    printf("Ch?n phép toán (+, -, *, /): ");
    scanf(" %c", &phepToan);

    switch (phepToan) {
        case '+':
            printf("K?t qu?: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("K?t qu?: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("K?t qu?: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("K?t qu?: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf("L?i: Không th? chia cho 0!\n");
            }
            break;
        default:
            printf("Phép toán không h?p l?!\n");
    }

    return 0;
}

