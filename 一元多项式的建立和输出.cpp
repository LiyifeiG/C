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
 
// void printPoly(Polynomial *head,int n){
// 	Polynomial *p;
// 	p=head->next;
// 	int m=1;
// 	while(m<=n){
// 		printf("%d  %d\n",p->coef,p->expn);
// 		p=p->next;
// 		m++;
// 	}
// }
 void PrintPoly(Polynomial *head,int n){
 	Polynomial *p;
 	p=head->next;
 	int flag=1;
 	if(!p){
 		putchar('0');
 		printf("\n");
 		return;
 	}
 	while (flag<=n){
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
 main(){
 	Polynomial *pHead;
 	int n; 
 	scanf("%d",&n);
 	pHead=CreatePoly(n);
// 	printPoly(pHead,n);
 	PrintPoly(pHead,n);
 }
