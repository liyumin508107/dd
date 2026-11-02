#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("ÇëÊäÈëa,b,cµÄÖµ:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
		max = a;
	else 
		max = b;
	if(c>b)
		max = c;
	printf("max=%d\n", max);
}