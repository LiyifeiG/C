#include <stdio.h>
#include <stdlib.h>
struct student
{
	int num;
	char name[6];
	struct student *next;
};
int n;
struct student *creat()
{
	struct student *phead,*pnew,*pend;
	phead=NULL;
	n=0;
	pend=pnew=(struct student *)malloc(sizeof(struct student));
	scanf("%d%s",&pnew->num,pnew->name);
	while(pnew->num!=0)
	{
		n=n+1;
		if(n==1)
		{
			phead=pnew;
		}
		else
		{
			pend->next=pnew;
		}
		pend=pnew;
		pnew=(struct student *)malloc(sizeof(struct student));
		scanf("%d%s",&pnew->num,pnew->name);
	}
	pend->next=NULL;
	free(pnew);
	return phead;
}
void print(struct student *phead)
{
	struct student *p;
	p=phead;
	while(p!=NULL)
	{
		printf("%d  %s\n",p->num,p->name);
		p=p->next;
	}
}
main()
{
	struct student *phead;
	phead=creat();
	print(phead);
}
