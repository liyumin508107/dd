#include<stdio.h>
int main()
{
	int a = 100, b = 250;
	int c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d", a, b);
}