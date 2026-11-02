#include <stdio.h>
int main()
{
	int max(int x, int y);
	int a, b, c;
	printf("请输入第一个整数:\n");
	scanf_s("%d", &a);
	printf("请输入第二个整数:\n");
	scanf_s("%d", &b);
	c = max(a, b);
	printf("较大的数是: %d\n", c);
	return 0;
}
int max(int x,int y)
{
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;

}