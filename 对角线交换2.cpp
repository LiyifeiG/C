#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,j,max,k;
	int arr[6][6];
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			scanf("%d,",&arr[i][j]);
	}
	for(j=0;j<6;j++)
	{
		max=0;
		for(i=0;i<6;i++)
		{
			if(abs(arr[i][j])>max)
			{
				max=arr[i][j];
				k=i;
			}
		}
		arr[k][j]=arr[k][k];
		arr[k][k]=max;
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
}
