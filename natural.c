#include <stdio.h>
int n,i,sum=0;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
