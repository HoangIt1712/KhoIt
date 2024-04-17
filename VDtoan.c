#include <stdio.h>

//int marks() {
int main(){
    int count = 0;
    float total = 0;
    char choice;
    char subject[50];
    float score;

    do {
        printf("Nh?p tên môn h?c: ");
        scanf("%s", subject);
        printf("Nh?p ði?m: ");
        scanf("%f", &score);
        total += score;
        count++;
        printf("B?n có mu?n ti?p t?c hay không? (y/n): ");
        scanf("%c", &choice);
    } while (choice == 'y' || choice == 'Y');

    if (count > 0) {
       double average = total/count;
       printf("Ði?m trung b?nh c?a b?n là: %.2lf\n", average);
   } else {
       printf("Không có môn h?c nào ðý?c nh?p ði?m.\n");
   }

   return 0;
}

