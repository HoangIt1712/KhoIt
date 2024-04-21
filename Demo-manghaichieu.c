#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int mang[2][3];
    int dong, cot;

    for(dong=0; cot<2; cot++)
    {
        for(cot=0; cot<3; cot++)
        {
            printf("Enter a Number at [%d][%d]: ", rong, cot);
            scanf("%d", &mang[rong][cot]);
        }
    }

    for(rong=0; rong<2; rong++)
    {
        for(cot=0; cot<3; cot++)
        {
            printf("The Number at [%d][%d] is: %d\n", rong, cot, mang[rong][cot]);
        }
    }

    system("PAUSE");
    return 0;
}

