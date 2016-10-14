#include <stdio.h>
int sushu(int m)
{
	int i,flag; 
	flag=1;
	for(i=2;i<m/2+1;i++)
	{
		if(m%i==0)
		{
			flag=0;break;
		}
	}
	return flag;
}
int main()
{
	int i,j,x;
	scanf("%d",&x);
	for(i=2;i<(x/2+1);i++)
	{
		if(x%i==0)
		{
			if (sushu(i)!=0)
			printf("%d ",i);
		}
	}
} 
