#include <stdio.h>

int main() {
    char kyTu;
    printf("Nh?p m?t k? t? Alphabet (A-Z, a-z): ");
    scanf("%c", &kyTu); // �?c m?t k? t? t? b�n ph�m

    // Ki?m tra xem k? t? c� thu?c b?ng ch? c�i kh�ng
    if ((kyTu >= 'A' && kyTu <= 'Z') || (kyTu >= 'a' && kyTu <= 'z')) {
        // Ki?m tra xem k? t? c� ph?i l� nguy�n �m kh�ng
        if (kyTu == 'A' || kyTu == 'E' || kyTu == 'I' || kyTu == 'O' || kyTu == 'U' ||
            kyTu == 'a' || kyTu == 'e' || kyTu == 'i' || kyTu == 'o' || kyTu == 'u') {
            printf("K? t? '%c' l� nguy�n �m!\n", kyTu);
        } else {
            printf("K? t? '%c' l� ph? �m!\n", kyTu);
        }
    } else {
        printf("K? t? '%c' kh�ng thu?c b?ng ch? c�i Alphabet!\n", kyTu);
    }

    return 0;
}

