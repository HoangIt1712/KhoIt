#include <stdio.h>

int main() {
    char kyTu;
    printf("Nhap ky tu (Nhap ' ' de thoat): ");
    do {
        scanf(" %c", &kyTu);
        if (kyTu >= '0' && kyTu <= '9') {
            printf("Ky tu la chu so.\n");
        } else if ((kyTu >= 'a' && kyTu <= 'z') || (kyTu >= 'A' && kyTu <= 'Z')) {
            printf("Ky tu la chu cai.\n");
        } else if (kyTu == ' ') {
            break;
        } else {
            printf("Ky tu la ky tu dac biet.\n");
        }
    } while (1);
    return 0;
}

