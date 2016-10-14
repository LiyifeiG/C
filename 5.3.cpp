#include <stdio.h>
int main()
{
	int i,n,m,s,j;
	s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		m=0;
		for(j=1;j<=i;j=j+1)
		{
			m=m+j;
		}
		s=s+m;
	}
	printf("s=%d",s);
}
