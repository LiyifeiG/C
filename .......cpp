#include <stdio.h>
main()
{
	int i,j,m,n,c;
	scanf("%d,%d",&m,&n);
	int a[100],b[100];
	for(i=0;i<m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	for(i=0;i<n;i++)
		a[m+i]=b[i];
	for(i=0;i<m+n;i++)
	{
		for(j=i;j<m+n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	for(i=0;i<m+n;i++)
		printf("%d ",a[i]);
}
