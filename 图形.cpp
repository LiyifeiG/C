#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	if(n==1)
		printf("*");
	else
	{
		for(j=1;j<=n;j=j+2)
		{
		   printf("*");
		   for(i=1;i<j-1;i=i+2)
		   {
			   printf("+");
			} 
		} 
	}
	printf("*");
}
