#include <stdio.h>
int main()
{
	int A,B,max;
	printf("请输入两个整数（A,B):");
	scanf("%d,%d",&A,&B);
	max=A;
	if(B>max)
		max=B;
	printf("max=%d",max); 
}
