#include <stdio.h>
int main()
{
	int a;
	printf("������1����:");
	scanf("%d",&a);
	if(a>0)
		if(a%2==0)
			printf("����ż��");
		else
			printf("��������");
	if(a<0)
		if(a%2==0)
			printf("�Ǹ�ż��");
		else
			printf("�Ǹ�����");				 
} 
