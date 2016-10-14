#include <stdio.h>
int main()
{
	int a,i,j,k,x;
	scanf("%d",&a);
	x=a;
	for(i=1;i<=x;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=a;k>0;k--)
		{
			printf("*");
		}
		a--;
		printf("\n");
	}
}
