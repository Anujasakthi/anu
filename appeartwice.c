#include <stdio.h>
int n,i,j,temp,flag=0;
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
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		flag=0;
		if(a[i]==a[i+1])
		{
			flag++;
			i++;
		}
		if(flag==0)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
