#include <stdio.h> 
int main()
{
	int x,y,z;
	printf("请输入三个数:");
	scanf("%d,%d,%d",&x,&y,&z);
	if(x<y&&x<z)
		printf("%d",x);
	if(y<x&&y<z)
		printf("%d",y);
	if(z<x&&z<y)
		printf("%d",z);
}
