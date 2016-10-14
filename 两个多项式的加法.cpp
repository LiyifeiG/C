#include <stdio.h>
#include <stdlib.h>
typedef struct Polynomial
 {
 	int coef;
 	int expn;
 	struct Polynomial *next;
 }Polynomial;
 Polynomial* CreatePoly(int n){
 	Polynomial *head,*rear,*s;
 	int c,e,tag;
 	head=(Polynomial *)malloc(sizeof(Polynomial));
 	rear=head;
 	tag=1;
 	char a,b;
 	getchar();
 	while(tag<=n){
 		s=(Polynomial *)malloc(sizeof(Polynomial));
 		scanf("%c%d,%d%c",&a,&c,&e,&b);
// 		scanf("%d%d",&c,&e);
 		s->coef=c;
 		s->expn=e;
 		rear->next=s;
 		rear=s;
 		tag++;
 	}
 	rear->next=NULL;
 	return head;
 }
Polynomial* AddPolyn(Polynomial *pa,Polynomial *pb)
{
	Polynomial* qa=pa->next;
	Polynomial* qb=pb->next;
	Polynomial* headc,*pc,*qc;
	pc=(Polynomial *)malloc(sizeof(Polynomial));
	pc->next=NULL;
	headc=pc;
	while(qa!=NULL&&qb!=NULL)
	{
		qc=(Polynomial *)malloc(sizeof(Polynomial));
		if(qa->expn<qb->expn)
		{
			qc->coef=qa->coef;
			qc->expn=qa->expn;
			qa=qa->next;
		}
		else if(qa->expn==qb->expn)
		{
			qc->coef=qa->coef+qb->coef;		//¼Ó¼õ 
			qc->expn=qa->expn;
			qa=qa->next;
			qb=qb->next;
		}
		else
		{
			qc->coef=qb->coef;
			qc->expn=qb->expn;
			qb=qb->next;
		}
		
		if(qc->coef!=0)
		{
			qc->next=NULL;
			pc->next=qc;
			pc=qc;
		}
		else free(qc);
	}
	while(qa!=NULL)
	{
		qc=(Polynomial *)malloc(sizeof(Polynomial));
		qc->coef=qa->coef;
		qc->expn=qa->expn;
		qa=qa->next;
		qc->next=pc->next;
		pc->next=qc;
		pc=qc;
	}
	while(qb!=NULL)
	{
		qc=(Polynomial *)malloc(sizeof(Polynomial));
		qc->coef=qb->coef;
		qc->expn=qb->expn;
		qb=qb->next;
		qc->next=pc->next;
		pc->next=qc;
		pc=qc;
	}
	return headc;
}
 void PrintPoly(Polynomial *head){
 	Polynomial *p;
 	p=head->next;
 	int flag=1;
 	if(!p){
 		putchar('0');
 		printf("\n");
 		return;
 	}
 	while (p){
 		if(flag==1)
		 {
 			if(p->expn==0)
 			{
 				printf("%d",p->coef);
 			}
 			if(p->expn==1)
			 {
 				printf("%dX",p->coef);
 			}
 			else
 			{
 				if(p->expn>0)
 				printf("%dX^%d",p->coef,p->expn);
 				if(p->expn<0)
 				printf("%dX^%d",p->coef,p->expn);
 			}
 		}
 		else
		 {
 			if(p->expn==0)
 			{
 				if(p->coef>0)
 				printf("+%d",p->coef);
 				if(p->coef<0)
 				printf("%d",p->coef);
 			}
 			if(p->expn==1)
			 {
			 	if(p->coef>0)
 				printf("+%dX",p->coef);
 				if(p->coef<0)
 				printf("%dX",p->coef);
 			}
 			else
 			{
 				if(p->expn>0)
				 {
 					if(p->coef>0)
 					printf("+%dX^%d",p->coef,p->expn);
 					if(p->coef<0)
 					printf("%dX^%d",p->coef,p->expn);
 			   	}
 				if(p->expn<0)
				 {
				 	if(p->coef>0)
 					printf("+%dX^%d",p->coef,p->expn);
 					if(p->coef<0)
 					printf("%dX^%d",p->coef,p->expn);
 				}
 			}
 		}
 		p=p->next;
 		flag++;
 	}
 }
main()
{
	Polynomial *pa,*pb,*pc;
 	int n,m; 
 	scanf("%d",&n);
 	pa=CreatePoly(n);
 	scanf("%d",&m);
 	pb=CreatePoly(m);
 	pc=AddPolyn(pa,pb);
 	PrintPoly(pc);
}
