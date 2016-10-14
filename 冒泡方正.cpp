#include <stdio.h>
main()
{
	int i,j,b,c,k;
	int a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=i+1;k<3;k++)
				{
					if(a[i][j]>a[i][k])
					{
						b=a[i][j];
						a[i][j]=a[i][k];
						a[i][k]=b;
					}
				} 
		}
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			for(k=i+1;k<3;k++)
			{
				if(a[i][j]>a[k][j])
				{
					c=a[i][j];
					a[i][j]=a[k][j];
					a[k][j]=c;
				}
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
