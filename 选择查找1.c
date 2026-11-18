#include <stdio.h>
void main()
{
    int a[6] = { 64, 34, 25, 12, 22, 11 }, i, j, n, flag = 0;
    printf("排列前的数组:\n");
    for (i = 0; i < 6; i++)
        printf("%4d", a[i]);
    printf("\n");
    printf("请输入要查询的值：");
    scanf_s("%d", &n);
    for (i = 0; i <= 5; i++)
        if (a[i] == n)
            flag = 1;
    if (flag == 1)
        printf("%d在本数组中！\n", n);
    else
        printf("%d不在本数组中！\n", n);
}
