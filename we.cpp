#include<stdio.h>
struct student
{
	char num[10];
	char name[10];
	int a;
	int b;
	int c;
}q[100];
void input(int n)
{
	struct student q;
	int i;
	for(i=0;i<n;i++)
	{
	scanf("%c",&q.num);
	scanf("%c",&q.name);
	scanf("%d",&q.a);
	scanf("%d",&q.b);
	scanf("%d",&q.c);
	printf("%c,",q.num);
	printf("%c,",q.name);
	printf("%d,",q.a);
	printf("%d,",q.b);
	printf("%d\n",q.c);
	}
}
main()
{
	int n,i;
	scanf("%d",&n);
	input(n);
}
