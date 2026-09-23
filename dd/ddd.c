#include<stdio.h>
int max(int x, int y);
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

	int j, n, m;
	printf("请输入第一个整数:\n");
	scanf_s("%d", &j);
	printf("请输入第二个整数:\n");
	scanf_s("%d", &n);
	m= max(j, n);
	printf("较大的数是: %d\n", m);
	return 0;
}
int max(int x, int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}