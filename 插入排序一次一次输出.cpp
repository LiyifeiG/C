#include <stdio.h>
#define n 100
main ()
{
	int i,j,k,l,b;
	int c[n];
	i=0;
	while((scanf("%d",&c[i]))!=EOF)
		{
			for(k=0;k<=i;k++)
			{
				for(l=k;l<=i;l++)
				{
					if(c[k]>c[l])
					{
						b=c[k];
						c[k]=c[l];
						c[l]=b;
					}	
				}
			}
			for(j=0;j<=i;j++)
			{
				printf("%d ",c[j]);
			}
			i++;
			printf("\n");
		}
} 
