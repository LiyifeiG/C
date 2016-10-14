#include <stdio.h>
#include <math.h>
void fun(int m)
{
	int i;
	for(i=2;i<=sqrt(m);i++)
	{
		while(m%i==0)
		{
			printf("%d ",i);
			m=m/i;
		}
	}
	if(m!=1)
	printf("%d",m);
} 
main()
{
	int n;
	scanf("%d",&n);
	fun(n);
}
