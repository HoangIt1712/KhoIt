#include <stdio.h>

//int marks() {
int main(){
    int count = 0;
    float total = 0;
    char choice;
    char subject[50];
    float score;

    do {
        printf("Nh?p t�n m�n h?c: ");
        scanf("%s", subject);
        printf("Nh?p �i?m: ");
        scanf("%f", &score);
        total += score;
        count++;
        printf("B?n c� mu?n ti?p t?c hay kh�ng? (y/n): ");
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    if (count > 0) {
       double average = total/count;
       printf("�i?m trung b?nh c?a b?n l�: %.2lf\n", average);
   } else {
       printf("Kh�ng c� m�n h?c n�o ��?c nh?p �i?m.\n");
   }

   return 0;
}

