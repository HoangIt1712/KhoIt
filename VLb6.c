#include <stdio.h>

int main() {
    int n, i;
    char ans;
    do {
        printf("Nh?p vào 1 s? nguyên nh? hõn 10: ");
        scanf("%d", &n);
    } while (n >= 10);

    printf("In ra b?ng c?u chýõng c?a %d: \n", n);
    for (i = 1; i <= 10; ++i) {
        printf("\t%d x %d = %d\n", i, n, i * n);
    }

    fflush(stdin);
    printf("B?n có mu?n ti?p t?c không? (Y/N): ");
    scanf("%c", &ans);
    
    while (ans == 'y' || ans == 'Y');

    return 0;
}
