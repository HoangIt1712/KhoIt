
#include <stdio.h>

//int bmi() {
    int main() {
    // Khai b�o bi?n cho c�n n?ng v� chi?u cao
    float weight, height;

    // Nh?p c�n n?ng v� chi?u cao t? ng�?i d�ng
    printf("Nh?p c�n n?ng (kg): ");
    scanf("%f", &weight);

    printf("Nh?p chi?u cao (m): ");
    scanf("%f", &height);

    // T�nh ch? s? BMI
    float bmi = weight / (height * height);

    // In ch? s? BMI
    printf("Ch? s? BMI c?a b?n l�: %.2f\n", bmi);

   // X�c �?nh t?nh tr?ng s?c kh?e
   if (bmi < 18.5) {
       printf("B?n �ang ? trong t?nh tr?ng g?y.\n");
   } else if (bmi < 24.9) {
       printf("B?n �ang ? trong t?nh tr?ng b?nh th�?ng.\n");
   } else if (bmi < 29.9) {
       printf("B?n �ang ? trong t?nh tr?ng th?a c�n.\n");
   } else {
       printf("B?n �ang ? trong t?nh tr?ng b�o ph?.\n");
   }

   return 0;
}

