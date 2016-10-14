#include <stdio.h>
main()
{
	int i,j,m,b,n;
	b=0;
	scanf("%d",&m);
	int a[m][m];
	if(m%2==0)
		n=m/2;
	else
		n=m/2+1;
	for(i=0;i<n;i++)
	{
		for(j=i;j<m-i;j++)
		{
			b++;
			a[i][j]=b;
		}
		for(j=i+1;j<m-i;j++)
		{
			b++;
			a[j][m-i-1]=b;
		}
		for(j=m-i-2;j>=i;j--)
		{
			b++;
			a[m-i-1][j]=b;
		}
		for(j=m-i-2;j>=i+1;j--)
		{
			b++;
			a[j][i]=b;
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(j==m-1)
			printf("%d",a[i][j]);
			else
			printf("%d ",a[i][j]);
		}
		if(i!=m-1)
		printf("\n");
	}
}
