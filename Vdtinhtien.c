#include <stdio.h>

//int tax()
int main() {
    // Nh?p tên t? ngý?i dùng
    char name[50];
    printf("Nh?p tên c?a b?n: ");
    scanf("%[^\n]s", name);

    // Nh?p s? gi? làm vi?c
    float hoursWorked;
    printf("Nh?p s? gi? làm vi?c: ");
    scanf("%f", &hoursWorked);

    // Nh?p giá m?i gi?
    float hourlyRate;
    printf("Nh?p giá m?i gi?: ");
    scanf("%f", &hourlyRate);

   // Tính t?ng ti?n lýõng
   float totalPayment = hoursWorked * hourlyRate;

   // Áp d?ng thu? (10%)
   float tax = 0.1 * totalPayment;
   float netPayment = totalPayment - tax;

   // In k?t qu?
   printf("\nC?m õn b?n %s ð? c?ng tác cùng chúng tôi.\nSau ðây là s? ti?n lýõng b?n nh?n ðý?c:\n", name);
   printf("T?ng ti?n lýõng trý?c thu?: $%.2f\n", totalPayment);
   printf("T?ng ti?n thu? (10%%): $%.2f\n", tax);
   printf("T?ng ti?n lýõng sau thu?: $%.2f\n", netPayment);

   return 0;
}

