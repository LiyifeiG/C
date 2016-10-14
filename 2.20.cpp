#include <stdio.h>
int main()
{
	int a;
	printf("请输入1个数:");
	scanf("%d",&a);
	if(a>0)
		if(a%2==0)
			printf("是正偶数");
		else
			printf("是正奇数");
	if(a<0)
		if(a%2==0)
			printf("是负偶数");
		else
			printf("是负奇数");				 
} 
