#include<stdio.h>
int main()
{
	float a, b, BWI;
	printf("请输入身高和体重:");
	scanf_s("%f%f", &a, &b);
	BWI = b / (a * a);
	printf("BWI=%.2f\n", BWI);
	return 0;
}