#include <stdio.h>
int main()
{
	float a, b, c;
	char op;
	printf("请输入表达式：");
	scanf_s("%f %c %f", &a,&op, &b);
	switch (op)
	{
	case '+':
		c = a + b;
		printf("结果为%f\n", c);
		break;
	case '-':
			c = a - b;
			printf("结果为%f\n", c);
			break;
	case '*':
		c = a * b;
		printf("结果为%f\n", c);
		break;
	case '/':
		if (b == 0)
			printf("错误！除数不能为0！\n");
		else
			c = a / b;
			printf("结果为%f\n", c);
			break;
	default:
		printf("错误！无效的运算符！\n");
	}
	return 0;
}