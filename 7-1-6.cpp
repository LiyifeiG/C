#include <stdio.h>
main()
{
	int d[][4]={1,2,3,4,5,6,7,8,9,10,11};
	int *p[3],j;
	for(j=0;j<3;j++)
		p[j]=d[j];
	printf("%5d %5d\n",*(*(p+2)+3),*(*(p+1)+1));
} 
