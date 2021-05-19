#include<stdio.h>
int algo(int n)
{
	if(n==1)
	{
		printf("%d ",n);
		return 0;
	}
	else if(n%2)
	{
		printf("%d ",n);
		return algo(3*n+1);
	}
	else
	{
		printf("%d ",n);
		return algo(n/2);
	}
}
int main()
{
	int n,a;
	scanf("%d",&n);
	algo(n);
	return 0;
}
