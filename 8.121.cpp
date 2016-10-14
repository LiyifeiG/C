#include <stdio.h>
void shulie(int a[10],int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		int n;
		n=a[i-1]*a[i-2];
		if(n<10)
			a[i]=n;
		else
		{
			a[i]=n/10;
			a[++i]=n%10;
		}
	}
	for(i=0;i<m-1;i++)
		printf("%d\n",a[i]);
	printf("%d",a[m-1]); 
}
main()
{
	int m;
	scanf("%d",&m);
	int a[m];
	a[0]=2;
	a[1]=3;
	shulie(a,m);
}
