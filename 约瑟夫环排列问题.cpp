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
//	printf("�����������");
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
//		printf("---------��ӡ����----------\n"); 
//		do
//		{
//			printf("%3d   %7d\n",pCur->id);
//			pCur=pCur->next;
//		} while(pCur!=pHead);
//	}
//}


void JosephusOperate(NodeType *head,int m){			//����Լɪ������ 
	NodeType *p,*t,*q;
	int i;
	int flag=1;
	t=p=head;			
	while(t->next!=head){		//��t��ʼָ��β��㣬δɾ����׼�� ����ֹÿ��ʼ�����ÿ���˵����붼Ϊ1ʱ�� 
		t=t->next;
	}	
	while(flag){
		for(i=1;i<m;i++)
		{								//��m��Ӧ�Ľ�� 
			t=p;
			p=p->next;
		}
		if(p==t)
		{		//��������ֻʣһ�������ʱ���������Ĵ��룬ѭ�������� 
			flag=0;
		}
		q=p;		//qָ��Ҫɾ���Ľ�� 
		t->next=p->next;		//ʹtָ����һ����㣬��Ҫɾ���Ľ����������ѽ� 
		p=p->next;			//��pָ��Ҫɾ��������һ����� 
//    	printf("��%d���˳���\n",q->id);
		printf("%d ",q->id);
		system("Pause");
		
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
//			printf("����̫�࣬����������\n");
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
	system("Pause");
	return 0;
}
