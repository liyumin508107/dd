#include<stdio.h>
int main()
{
	float a, b, h, area;
	printf("请输入梯形上底:");
	scanf_s("%f", &a);
	printf("请输入梯形下底:");
	scanf_s("%f", &b);
	printf("请输入梯形高:");
	scanf_s("%f", &h);
	area = (a + b) * h / 2;
	printf("梯形的面积为: %2f", area);
	return 0;
}