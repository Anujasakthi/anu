#include <stdio.h>
int n,k,i,a=1;
int main()
{
	scanf("%d%d",&n,&k);
	for(i=0;i<k;i++)
	{
		a=a*n;
	}
	printf("%d",a);
}
