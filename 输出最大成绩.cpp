 #include <stdio.h>
main()
{
	int i,max,j;
	int arr[10];
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	max=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			j=i;
		}
	}
	printf("%d,%d",j+1,max);
} 
