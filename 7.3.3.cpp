#include <stdio.h>
int fum(int m)
{
	static int t=3;
	m+=t++;
	return m;
} 
main ()
{
	int m,i,j;
	m=0;j=0;
	for(i=0;i<3;i++)
	j+=fum(m++);
	printf("%d\n",j);
}
