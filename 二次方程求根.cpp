#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c;
	float x1,x2,m,n;
	scanf("%d%d%d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2.0*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2.0*a);
	if(b*b-4*a*c>=0)
		printf("x1=%f x2=%f",x1,x2);
	else
		m=-b/(2.0*a);
		n=(sqrt(4*a*c-b*b))/(2.0*a);
		printf("x1=%0.3f+%0.3fi x2=%0.3f-%0.3fi",m,n,m,n);
} 
