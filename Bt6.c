#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Nh?p vào 3 s? nguyên a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
        if (a*a == b*b + c*c) {
            printf("C?nh huy?n là c?nh a.\n");
        } else if (b*b == a*a + c*c) {
            printf("C?nh huy?n là c?nh b.\n");
        } else {
            printf("C?nh huy?n là c?nh c.\n");
        }
    } else {
        printf("Ba s? không l?p thành c?nh c?a m?t tam giác vuông.\n");
    }

    return 0;
}

