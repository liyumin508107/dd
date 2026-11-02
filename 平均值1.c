#include<stdio.h>
int main()
{
	float num1, num2, num3, average;
	printf("请输入第一个数：");
	scanf_s("%f", &num1);
	printf("请输入第二个数:");
	scanf_s("%f", &num2);
	printf("请输入第三个数:");
	scanf_s("%f", &num3);
	average = (num1 + num2 + num3) / 3;
	printf("三个数的平均值：%.2f\n", average);
	return 0;
}