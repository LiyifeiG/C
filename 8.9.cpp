#include <stdio.h>
#include <math.h>
long int fun(int x,int n)
{
	long int f;
	if(n==0)
	return 1;
	f=fun(x,n-1)*x;
	return f;
}
main()
{
	int n,x;
	scanf("%d%d",&x,&n);
	printf("%ld",fun(x,n));
}
