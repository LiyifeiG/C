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
//	printf("�������%d���˵����룺",i);
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
//	printf("�����������");
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
//		printf("---------��ӡ����----------\n"); 
		do
		{
			printf("%3d   %7d\n",pCur->id,pCur->password);
			pCur=pCur->next;
		} while(pCur!=pHead);
	}
}


void JosephusOperate(NodeType *head,int ipassword){			//����Լɪ������ 
	NodeType *p,*t,*q;
	int i;
	int flag=1;
	t=p=head;			
	while(t->next!=head){		//��t��ʼָ��β��㣬δɾ����׼�� ����ֹÿ��ʼ�����ÿ���˵����붼Ϊ1ʱ�� 
		t=t->next;
	}	
	while(flag){
		for(i=1;i<ipassword;i++)
		{								//��ipassword��Ӧ�Ľ�� 
			t=p;
			p=p->next;
		}
		if(p==t)
		{		//��������ֻʣһ�������ʱ���������Ĵ��룬ѭ�������� 
			flag=0;
		}
		q=p;		//qָ��Ҫɾ���Ľ�� 
		ipassword=q->password;
		t->next=p->next;		//ʹtָ����һ����㣬��Ҫɾ���Ľ����������ѽ� 
		p=p->next;			//��pָ��Ҫɾ��������һ����� 
//    	printf("��%d���˳���(���룺%d)\n",q->id,q->password);
		printf("%d ",q->id);
		
		free(q);		//�ͷ�ɾ�����q 
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
			printf("����̫�࣬����������\n");
		}
//		printf("������������");
		scanf("%d",&n);
	}while(n>MAX);
//	printf("�������ʼ����m��");
	scanf("%d",&m);
	pHead=CreatList(pHead,n);
//	PrintList(pHead);
//	printf("------------��ӡ�������-----------\n");
	JosephusOperate(pHead,m);
	return 1;
}
