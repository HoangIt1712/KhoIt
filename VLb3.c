#include <stdio.h>

int main() {
    int chieuCao, i, j;
    printf("Nhap chieu cao tam giac (>=2): ");
    scanf("%d", &chieuCao);
    while (chieuCao < 2) {
        printf("Chieu cao phai >= 2. Nhap lai: ");
        scanf("%d", &chieuCao);
    }
    for (i = 1; i <= chieuCao; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

