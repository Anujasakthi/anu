#include <stdio.h>
int n,i,temp;
int main()
{
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
