#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,j;
	float l,mu,s;
	l=1.0;
	n=1;
	s=0.0;
	while(l>=pow(10,-7))
	{
		s=s+l;
		mu=1.0;
		for(j=1;j<=n;j++)
		{
			mu=mu*j;
		}
		n=n+1;
		l=1/mu;
	}
	printf("%f",s);
}
