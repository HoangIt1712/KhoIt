
#include <stdio.h>

//int bmi() {
    int main() {
    // Khai báo bi?n cho cân n?ng và chi?u cao
    float weight, height;

    // Nh?p cân n?ng và chi?u cao t? ngý?i dùng
    printf("Nh?p cân n?ng (kg): ");
    scanf("%f", &weight);

    printf("Nh?p chi?u cao (m): ");
    scanf("%f", &height);

    // Tính ch? s? BMI
    float bmi = weight / (height * height);

    // In ch? s? BMI
    printf("Ch? s? BMI c?a b?n là: %.2f\n", bmi);

   // Xác ð?nh t?nh tr?ng s?c kh?e
   if (bmi < 18.5) {
       printf("B?n ðang ? trong t?nh tr?ng g?y.\n");
   } else if (bmi < 24.9) {
       printf("B?n ðang ? trong t?nh tr?ng b?nh thý?ng.\n");
   } else if (bmi < 29.9) {
       printf("B?n ðang ? trong t?nh tr?ng th?a cân.\n");
   } else {
       printf("B?n ðang ? trong t?nh tr?ng béo ph?.\n");
   }

   return 0;
}

