#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct NodeType
{
	int id;
	struct NodeType *next;
} NodeType;
 
NodeType *CreatList(NodeType *pHead,int n)
{
	NodeType *p,*t;
	int i=0;
	int id;
	for(i=1;i<=n;i++)
	{
		p=(NodeType *)malloc(sizeof(NodeType));
		p->id=i;
		if(i==1){
			pHead=t=p;
//			t->next=pHead;
		}
		else{
			t->next=p;
			t=p;
		
		}
	}
		t->next=pHead;
//	printf("创建链表完毕");
	return pHead; 
}



int IsEmptyList(NodeType *pHead)
{
	if(!pHead)
	{
		printf("The list is empty!\n");
		return 1;
	}
	return 0;
}
//
//void PrintList(NodeType *pHead)
//{
//	NodeType *pCur=pHead;
//	if(!IsEmptyList(pHead))
//	{
//		printf("---------打印链表----------\n"); 
//		do
//		{
//			printf("%3d   %7d\n",pCur->id);
//			pCur=pCur->next;
//		} while(pCur!=pHead);
//	}
//}


void JosephusOperate(NodeType *head,int m){			//运行约瑟夫环问题 
	NodeType *p,*t,*q;
	int i;
	int flag=1;
	t=p=head;			
	while(t->next!=head){		//将t初始指向尾结点，未删除做准备 （防止每初始密码和每个人的密码都为1时） 
		t=t->next;
	}	
	while(flag){
		for(i=1;i<m;i++)
		{								//到m对应的结点 
			t=p;
			p=p->next;
		}
		if(p==t)
		{		//当链表中只剩一个结点是时，完成下面的代码，循环将结束 
			flag=0;
		}
		q=p;		//q指向要删除的结点 
		t->next=p->next;		//使t指向下一个结点，让要删除的结点从链表中脱节 
		p=p->next;			//让p指向要删除结点的下一个结点 
//    	printf("第%d个人出列\n",q->id);
		printf("%d ",q->id);
		system("Pause");
		
		free(q);		//释放删除结点q 
	}
}
int main()
{
	int n=0;
	int m=0;
	NodeType *pHead=NULL;
	do
	{
		if(n>MAX)
		{
//			printf("人数太多，请重新输入\n");
		}
//		printf("请输入人数：");
		scanf("%d",&n);
	}while(n>MAX);
//	printf("请输入初始密码m：");
	scanf("%d",&m);
	pHead=CreatList(pHead,n);
//	PrintList(pHead);
//	printf("------------打印出队情况-----------\n");
	JosephusOperate(pHead,m);
	system("Pause");
	return 0;
}
