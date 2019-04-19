#include <stdio.h>
int no,i,t;
int main()
{
	scanf("%d",&no);
	int a[no];
	for(i=0;i<no;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<no-1;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	for(i=no-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	return 0;
}
