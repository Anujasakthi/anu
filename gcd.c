#include <stdio.h>
int n,i,q;
int main()
{
	scanf("%d%d",&n,&q);
	int a[n],l1,l2,r1,r2,gcd,hcf;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&l1,&l2);
	scanf("%d%d",&r1,&r2);
	for(i=1;i<=l1 && i<=l2;i++)
	{
		if((l1%i==0)&&(l2%i==0)) 
		{
			gcd=i;
		}
	}
	for(i=1;i<=r1 && i<=r2;i++)
	{
		if((r1%i==0)&&(r2%i==0))
		{
			hcf=i;
		}
	}
	printf("%d\n%d",gcd,hcf);
	return 0;
}
