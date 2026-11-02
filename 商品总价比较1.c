#include<stdio.h>
int main()
{
	float a;
	printf("请输入商品总价:");
	scanf_s("%f", &a);
	if (a > 300)
		printf("折扣为八折\n");
	else if (a > 100)
		printf("折扣为九折\n");
	else if (a > 0)
		printf("没有折扣\n");
	else
		printf("金额非法\n");
	return 0;
}