#include <stdio.h>
int main() 
{
	float a,b,c,d;
	float s,z;
	printf("请输入四个数:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s=a+b+c+d;
	z=s/4;
	printf("平均值= ",z); 
}
