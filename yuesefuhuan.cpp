#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct NodeType
{
	int id;
	int password;
	struct NodeType *next;
} NodeType;
 
NodeType *CreatList(NodeType *pHead,int n)
{
	NodeType *p,*t;
	int i=0;
	int id,ipassword=0;
	for(i=1;i<=n;i++){
//	printf("请输入第%d个人的密码：",i);
	scanf("%d",&ipassword);
	p=(NodeType *)malloc(sizeof(NodeType));
	p->password=ipassword;
	p->id=i;
	if(i==1){
		pHead=t=p;
		t->next=pHead;
	}
	else{
		p->next=t->next;
		t->next=p;
		t=p;
	}
	}
//	printf("创建链表完毕");
	return pHead; 
}

//NodeType *GetNode(int iid,int ipassword)
//{
//	NodeType *pNew=NULL;
//	pNew=(NodeType *)malloc(sizeof(NodeType));
//	pNew->id=iid;
//	pNew->password=ipassword;
//	pNew->next=NULL;
//	return pNew; 
//} 

int IsEmptyList(NodeType *pHead)
{
	if(!pHead)
	{
		printf("The list is empty!\n");
		return 1;
	}
	return 0;
}

void PrintList(NodeType *pHead)
{
	NodeType *pCur=pHead;
	if(!IsEmptyList(pHead))
	{
//		printf("---------打印链表----------\n"); 
		do
		{
			printf("%3d   %7d\n",pCur->id,pCur->password);
			pCur=pCur->next;
		} while(pCur!=pHead);
	}
}


void JosephusOperate(NodeType *head,int ipassword){			//运行约瑟夫环问题 
	NodeType *p,*t,*q;
	int i;
	int flag=1;
	t=p=head;			
	while(t->next!=head){		//将t初始指向尾结点，未删除做准备 （防止每初始密码和每个人的密码都为1时） 
		t=t->next;
	}	
	while(flag){
		for(i=1;i<ipassword;i++)
		{								//到ipassword对应的结点 
			t=p;
			p=p->next;
		}
		if(p==t)
		{		//当链表中只剩一个结点是时，完成下面的代码，循环将结束 
			flag=0;
		}
		q=p;		//q指向要删除的结点 
		ipassword=q->password;
		t->next=p->next;		//使t指向下一个结点，让要删除的结点从链表中脱节 
		p=p->next;			//让p指向要删除结点的下一个结点 
//    	printf("第%d个人出列(密码：%d)\n",q->id,q->password);
		printf("%d ",q->id);
		
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
			printf("人数太多，请重新输入\n");
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
	return 1;
}
