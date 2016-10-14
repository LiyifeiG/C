#include<stdio.h>
#include<math.h>
long int zhi(int x,int n)
{
	long int p,s;
	if(n==1)
		return x;
	else
		s=pow(-1,n-1)*pow(x,n)+zhi(x,n-1);
	return (s);
}
main()
{
	int a,b;
	long int q;
	scanf("%d,%d",&a,&b);
	q=zhi(a,b);
	printf("%ld",q);
}
