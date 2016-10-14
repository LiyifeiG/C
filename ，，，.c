#include <stdio.h>
#include <stlib.h>
struct student
{
	char num[6];
	char name[6];
	struct student *next;
}
int n;
struct student *creat()
{
	struct student *phead,*pnew,*pend;
	phead=NULL;
	n=0;
	pend=pnew=(struct student *)malloc(sizeof(struct student));
	scanf("%s%s",pnew->num,pnew->name);
	while(pnew->num!=0)
	{
		n=n+1;
		if(n==1)
		{
			head=pnew;
		}
		else
		{
			pend->next=pnew;
		}
		pend=pnew;
		pnew=(struct student *)malloc(sizeof(struct student));
		scanf("%s%s",pnew->num,pnew->name);
	}
	pend->next=NULL;
}
