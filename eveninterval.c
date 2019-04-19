#include <stdio.h>
int no,t,i;
int main()
{
	scanf("%d%d",&no,&t);
	while(no<t)
	{
		for(i=no+1;i%2==0;i++)
		{
			printf("%d\t",i);
		}
		no++;
	}
}
