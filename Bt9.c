#include <stdio.h>

int main() {
    int soDo;
    printf("Nh?p vào s? ð?: ");
    scanf("%d", &soDo);

    for (int i = 1; i <= soDo; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

