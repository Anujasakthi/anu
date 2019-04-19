#include <stdio.h>
int n,m,i,j,flag=0;
int main()
{
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<m;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j]==a[i])
			{
				flag++;
			}
		}
	}
	if(flag==m)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
