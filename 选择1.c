#include <stdio.h>
int main()
{
    int a[6] = { 64, 34, 25, 12, 22, 11 }, i, j, t, minIdx;
    printf("排列前的数组:\n");
    for (i = 0; i < 6; i++)
        printf("%4d", a[i]);
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        minIdx = i;
        for (j = i + 1; j < 6; j++)
        {
            if (a[j] < a[minIdx])
            {
                minIdx = j;
            }
        }
        if (minIdx != i)
        {
            t = a[i];
            a[i] = a[minIdx];
            a[minIdx] = t;
        }
    }
    printf("排序后的数组为：\n");
    for (i = 0; i < 6; i++)
        printf("%4d", a[i]);
    printf("\n");
    return 0;
}