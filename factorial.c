#include <stdio.h>
int n,i,fact=1;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
