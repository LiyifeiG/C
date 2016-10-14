#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("请输入三角形三边长a,b,c=");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0||a+b<=c||a+c<=b||b+c<=a)
	{
		printf("不是三角形");
		int exit(1);
	}
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		printf("是直角三角形");
	else printf("不是");
}
