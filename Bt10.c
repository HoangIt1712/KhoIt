#include <stdio.h>

int main() {
    float doDai;
    char donVi;
    printf("�? d�i (m): ");
    scanf("%f", &doDai);
    printf("��n v? (�?i m.m., cm., m., km..): ");
    scanf(" %c", &donVi);

    switch (donVi) {
        case 'm':
            printf("�? d�i th�nh m l�: %.2f\n", doDai);
            break;
        case 'c':
            printf("�? d�i th�nh cm l�: %.2f\n", doDai * 100);
            break;
        case 'k':
            printf("�? d�i th�nh km l�: %.2f\n", doDai / 1000);
            break;
        default:
            printf("��n v? kh�ng h?p l?!\n");
    }

    return 0;
}

