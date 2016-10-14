#include <stdio.h>
main()
{
	int i,j;
	int a[]={1,2,3,4,5,6};
	for(i=0;i<4;i++)
	{
		a[i]+=i;
		j+=a[i]*i;
	}
	printf("%5d",j);
}
