#include <stdio.h>
#include <stdlib.h>
main()
{
	int i,j,max,a,k;
	int arr[6][6];
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			scanf("%d",&arr[i][j]);
	}
	for(j=0;j<6;j++)
	{
		max=0;
		for(i=0;i<6;i++)
		{
			if(abs(arr[i][j])>max)
				max=arr[i][j];
				k=i;
		}
		a=arr[j][j];
		arr[j][j]=max;
		arr[k][j]=a;
		printf("%d\n",max);
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			printf("%d",arr[i][j]);
		printf("\n");
	}
}
