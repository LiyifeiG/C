#include<stdio.h>
int shuixianhua(int x)
{
	int a,b,c,y;
	a=x%10;
	b=x%100/10;
	c=x/100;
	y=a*a*a+b*b*b+c*c*c;
	return y;
} 
int main()
{
	int i;
	for(i=100;i<1000;i++)
	{
		if(shuixianhua(i)==i)
		{
			printf("%d ",i);
		}
	}
}
