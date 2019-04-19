#include <stdio.h>
int n,i,mul;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		mul=n*i;
		printf("%d\t",mul);
	}
	return 0;
}
