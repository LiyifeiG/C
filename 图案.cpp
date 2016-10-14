#include <stdio.h>
int main()
{
	int i,j,n,a,p,q;
	scanf("%d",&n);
	a=(n-1)/2;
	printf("*\n"); 
	for(i=1;i<=a;i=i+1)
	{
		printf("*");
		for(j=1;j<=(2*i-1);j=j+1)
		{
			printf("+");
		}
		printf("*");
	printf("\n");
	}
	for(p=a-1;p>0;p=p-1)
	{
		printf("*");
		for(q=1;q<=(2*p-1);q=q+1)
		{
			printf("+");
		}
		printf("*");
	printf("\n");	
	}
	printf("*");
} 
