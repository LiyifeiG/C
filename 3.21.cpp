#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,m;
	char q,n;
	printf("«Î ‰»Îa,bµƒ÷µ:");
	scanf("%d%d",&a,&b);
	n= getchar();
	q= getchar();
	switch(q)
	{
	   case '+': m=a+b;printf("a+b=%d",m);break;
	   case '-': m=a-b;printf("a-b=%d",m);break;
	   case '*': m=a*b;printf("a*b=%d",m);break;
	   case '/': m=(float)a/b;printf("a/b=%f",m);break;
    }	
} 
