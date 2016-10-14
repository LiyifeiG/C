#include <stdio.h>
int main()
{
	int a[5],i;
	printf("输入数字:\n"); 
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("输入的数字是:\n");
	for(i=0;i<5;i++)
	{
		printf("%d  ",a[i]);
	}
} 
