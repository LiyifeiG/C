#include <stdio.h>
int main()
{
	int m,n,p,i,max,min;
	scanf("%d%d",&m,&n);
	if(m>n)
	{
		max=m;
		min=n;
	}
	else
	{
		max=n;
		min=m;
	}
	i=min;
	while(i<=min)
	{
		if(m%i==0&&n%i==0)
		{
			printf("%d ",i);
			break; 
		}
		else
			i=i-1;
	} 
	p=max;
	while(p>=max)
	{
		if(p%m==0 && p%n==0)
		{
			printf("%d",p);
			break;
		}
		else
			p=p+1;
	}
}
