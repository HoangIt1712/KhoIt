#include <stdio.h>

int main() {
    char kyTu;
    printf("Nh?p m?t k? t? Alphabet (A-Z, a-z): ");
    scanf("%c", &kyTu); // Ð?c m?t k? t? t? bàn phím

    // Ki?m tra xem k? t? có thu?c b?ng ch? cái không
    if ((kyTu >= 'A' && kyTu <= 'Z') || (kyTu >= 'a' && kyTu <= 'z')) {
        // Ki?m tra xem k? t? có ph?i là nguyên âm không
        if (kyTu == 'A' || kyTu == 'E' || kyTu == 'I' || kyTu == 'O' || kyTu == 'U' ||
            kyTu == 'a' || kyTu == 'e' || kyTu == 'i' || kyTu == 'o' || kyTu == 'u') {
            printf("K? t? '%c' là nguyên âm!\n", kyTu);
        } else {
            printf("K? t? '%c' là ph? âm!\n", kyTu);
        }
    } else {
        printf("K? t? '%c' không thu?c b?ng ch? cái Alphabet!\n", kyTu);
    }

    return 0;
}

