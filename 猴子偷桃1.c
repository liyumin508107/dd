#include<stdio.h>
int main()
{
	int i, sum=1;
	for (i = 9;i >= 1;i--)
	{
			sum = (sum +1)*2;
		}
		printf("%d,",sum);
		return 0;
}