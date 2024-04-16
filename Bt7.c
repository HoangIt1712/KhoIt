#include <stdio.h>

int main() {
    int num1, num2;
    printf("Nh?p vào 2 s? num1 và num2: ");
    scanf("%d %d", &num1, &num2);

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("Hai s? là ı?c s? c?a nhau.\n");
    } else {
        printf("Hai s? không là ı?c s? c?a nhau.\n");
    }

    return 0;
}

