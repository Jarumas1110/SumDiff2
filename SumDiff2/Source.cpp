#include<stdio.h>
int main()
{
	int n[10],i,sum=0;
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d",&n[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (n[i]%2 == 0)
		{
			sum -= i;
		}
		else
		{
			sum += i;
		}
	}
	printf("%d", sum);
}
