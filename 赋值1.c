#include<stdio.h>
int main(void)
{
	int r = 8;int h = 9;
	double v;
	scanf_s("%d%d", &r, &h);
	v = 3.14159 * r * r * h;
	printf("v=%f\n", v);
	int a, b;
	scanf_s("%d:%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	int c, e, g;
	scanf_s("%4d%2d%2d", &c, &e, &g);
	printf("c=%4d,e=%2d,g=%2d\n", c, e, g);
}
