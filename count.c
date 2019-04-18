#include <stdio.h>
int n,count=0;
int main()
{
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
