#include <stdio.h>

int main() {
    int soDo;
    printf("Nh?p v�o s? �?: ");
    scanf("%d", &soDo);

    for (int i = 1; i <= soDo; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

