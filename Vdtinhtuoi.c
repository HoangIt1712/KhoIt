#include <stdio.h>
#include <stdlib.h>

int tuoiTot(void) {
    // Nh?p tên ngý?i dùng
    char name[50];
    printf("Nh?p tên c?a b?n: ");
    scanf("%s", name); // có th? ch? 1 trong 2 l?nh scanf này (d?ng 9 ho?c 10) ð? xem s? khác bi?t mà
                       // nh?p tên bao g?m c? kho?ng tr?ng (space), không nh?n k? t? xu?ng d?ng (enter)

    // Nh?p nãm sinh t? ngý?i dùng
    int birthYear;
    printf("Nh?p nãm sinh c?a b?n: ");
    scanf("%d", &birthYear);

    // Tính toán tu?i
    int currentYear = 2024; // S?a s? nãm hi?n t?i là 2024
    int age = currentYear - birthYear;

   // In thông tin l?i chào ch?a ð?ng tu?i
   printf("Xin chào, %s!\n", name);
   printf("B?n ð? s?ng tr?n %d tu?i.\n", age);

   if (age < 0) {
       printf("B?n ít hõn 0 tu?i, có v? nhý b?n ð? nh?p sai nãm sinh.\n");
   } else if (age < 18) {
       printf("B?n là m?t ngý?i tr? tu?i!\n");
   } else if (age < 60) {
       printf("B?n là m?t ngý?i trý?ng thành!\n");
   } else {
       printf("B?n là m?t ngý?i cao tu?i!\n");
   }

return 0;
}

