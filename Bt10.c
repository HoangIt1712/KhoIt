#include <stdio.h>

int main() {
    float doDai;
    char donVi;
    printf("Ð? dài (m): ");
    scanf("%f", &doDai);
    printf("Ðõn v? (ð?i m.m., cm., m., km..): ");
    scanf(" %c", &donVi);

    switch (donVi) {
        case 'm':
            printf("Ð? dài thành m là: %.2f\n", doDai);
            break;
        case 'c':
            printf("Ð? dài thành cm là: %.2f\n", doDai * 100);
            break;
        case 'k':
            printf("Ð? dài thành km là: %.2f\n", doDai / 1000);
            break;
        default:
            printf("Ðõn v? không h?p l?!\n");
    }

    return 0;
}

