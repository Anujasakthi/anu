#include <stdio.h>
int n,i;
int main()
{
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==a[i])
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
