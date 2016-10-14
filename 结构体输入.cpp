#include <stdio.h>
struct student
{
	char num[10];
	char name[10];
	int score[3];
};
void input(struct student stu[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%s%s",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%d",&stu[i].score[j]);
		}
	} 
}
void print(struct student stu[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("%s,%s,",stu[i].num,stu[i].name);
		for(j=0;j<3;j++)
		{
			if(j<2)
			printf("%d,",stu[i].score[j]);
			else
			printf("%d",stu[i].score[j]);
		}
		printf("\n");
	} 
}
int main()
{
	int n;
	scanf("%d",&n);
	struct student stu[n];
	input(stu,n);
	print(stu,n);
}
