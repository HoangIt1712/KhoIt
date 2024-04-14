#include <stdio.h>
#include <stdlib.h>

int tuoiTot(void) {
    // Nh?p t�n ng�?i d�ng
    char name[50];
    printf("Nh?p t�n c?a b?n: ");
    scanf("%s", name); // c� th? ch? 1 trong 2 l?nh scanf n�y (d?ng 9 ho?c 10) �? xem s? kh�c bi?t m�
                       // nh?p t�n bao g?m c? kho?ng tr?ng (space), kh�ng nh?n k? t? xu?ng d?ng (enter)

    // Nh?p n�m sinh t? ng�?i d�ng
    int birthYear;
    printf("Nh?p n�m sinh c?a b?n: ");
    scanf("%d", &birthYear);

    // T�nh to�n tu?i
    int currentYear = 2024; // S?a s? n�m hi?n t?i l� 2024
    int age = currentYear - birthYear;

   // In th�ng tin l?i ch�o ch?a �?ng tu?i
   printf("Xin ch�o, %s!\n", name);
   printf("B?n �? s?ng tr?n %d tu?i.\n", age);

   if (age < 0) {
       printf("B?n �t h�n 0 tu?i, c� v? nh� b?n �? nh?p sai n�m sinh.\n");
   } else if (age < 18) {
       printf("B?n l� m?t ng�?i tr? tu?i!\n");
   } else if (age < 60) {
       printf("B?n l� m?t ng�?i tr�?ng th�nh!\n");
   } else {
       printf("B?n l� m?t ng�?i cao tu?i!\n");
   }

return 0;
}

