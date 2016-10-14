#include <stdio.h>
int main()
{
	int i,j;
	int a[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(j=9;j>=0;j--)
	{
		if(j==0)
		{
			printf("%d",a[0]);
		}
		else
			printf("%d ",a[j]);
	}
} 
