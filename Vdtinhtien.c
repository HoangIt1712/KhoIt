#include <stdio.h>

//int tax()
int main() {
    // Nh?p t�n t? ng�?i d�ng
    char name[50];
    printf("Nh?p t�n c?a b?n: ");
    scanf("%[^\n]s", name);

    // Nh?p s? gi? l�m vi?c
    float hoursWorked;
    printf("Nh?p s? gi? l�m vi?c: ");
    scanf("%f", &hoursWorked);

    // Nh?p gi� m?i gi?
    float hourlyRate;
    printf("Nh?p gi� m?i gi?: ");
    scanf("%f", &hourlyRate);

   // T�nh t?ng ti?n l��ng
   float totalPayment = hoursWorked * hourlyRate;

   // �p d?ng thu? (10%)
   float tax = 0.1 * totalPayment;
   float netPayment = totalPayment - tax;

   // In k?t qu?
   printf("\nC?m �n b?n %s �? c?ng t�c c�ng ch�ng t�i.\nSau ��y l� s? ti?n l��ng b?n nh?n ��?c:\n", name);
   printf("T?ng ti?n l��ng tr�?c thu?: $%.2f\n", totalPayment);
   printf("T?ng ti?n thu? (10%%): $%.2f\n", tax);
   printf("T?ng ti?n l��ng sau thu?: $%.2f\n", netPayment);

   return 0;
}

