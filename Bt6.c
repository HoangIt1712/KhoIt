#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Nh?p v�o 3 s? nguy�n a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
        if (a*a == b*b + c*c) {
            printf("C?nh huy?n l� c?nh a.\n");
        } else if (b*b == a*a + c*c) {
            printf("C?nh huy?n l� c?nh b.\n");
        } else {
            printf("C?nh huy?n l� c?nh c.\n");
        }
    } else {
        printf("Ba s? kh�ng l?p th�nh c?nh c?a m?t tam gi�c vu�ng.\n");
    }

    return 0;
}

