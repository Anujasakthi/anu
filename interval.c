#include <stdio.h>
int n,k,i;
int main()
{
	scanf("%d%d",&n,&k);
	while(n<k)
	{
		for(i=n+1;i%2!=0;i++)
		{
			printf("%d\t",i);
		}
		n++;
	}
}
