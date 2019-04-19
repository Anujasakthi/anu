#include <stdio.h>
int n,no,temp,rev=0;
int main()
{
	scanf("%d",&n);
	no=n;
	while(n!=0)
	{
		temp=n%10;
		rev=rev*10+temp;
		n=n/10;
	}
	if(no==rev)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
