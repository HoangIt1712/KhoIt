#include <stdio.h>

int main() {
    int num1, num2;
    printf("Nh?p v�o 2 s? num1 v� num2: ");
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("Hai s? l� �?c s? c?a nhau.\n");
    } else {
        printf("Hai s? kh�ng l� �?c s? c?a nhau.\n");
    }

    return 0;
}

