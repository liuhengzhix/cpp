#include <stdio.h>

int main()
{
    puts("=================================================\n");
    /* int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    int(*p)[4] = a;
    printf("%d\n", sizeof(*(p + 1))); */

    int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
    int(*p)[4] = a; //a指向的是第0行,p也是
    int len = sizeof(p); //
    printf("指针大小为%d个Bytes\n\n", len);
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%2d ", *(*(p + i) + j));
        }
        printf("\n");
    }

    return 0;
}