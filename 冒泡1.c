#include <stdio.h>
int main()
{
    int a[6] = { 64, 34, 25, 12, 22, 11 }, i, j, t;
    printf("排列前的数组:\n");
    for (i = 0; i < 6; i++)
        printf("%4d", a[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5 - i; j++)
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
    printf("排序后的数组为：\n");
    for (i = 0; i < 6; i++)
        printf("%4d", a[i]);
    printf("\n");
    return 0;
}