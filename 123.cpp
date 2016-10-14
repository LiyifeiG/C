#include<stdio.h>
main()
{	int i,j,m,n,a[100],t;
	scanf("%d %d",&n,&m);
	for(i=0;i<n*m;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m*n-1;i++)
	{	for(j=0;j<m*n-1-i;j++)
		{	if(a[j]>a[j+1])
			{	t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n*m;i++)
	{	printf("%4d",a[i]);
		if((i+1)%m==0)
			printf("\n");
	}
}

