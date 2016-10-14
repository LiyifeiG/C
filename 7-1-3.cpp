#include <stdio.h>
main ()
{
	int i,j;
	int a[][4]={1,2,3,4,5,6,7,8,9,10,11};
	for(i=1;i<3;i++)
		for(j=i;j<4;j++)
			a[i][j]+=a[i][j-1];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			printf("%5d",a[i][j]);
}
