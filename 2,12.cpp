#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	printf("���������������߳�a,b,c=");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<0||b<0||c<0||a+b<=c||a+c<=b||b+c<=a)
	{
		printf("����������");
		int exit(1);
	}
	if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		printf("��ֱ��������");
	else printf("����");
}
