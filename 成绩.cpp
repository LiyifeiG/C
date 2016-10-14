#include <stdio.h>
int main() 
{
	int a,sum,i;
	float m;
	sum=0;
	i=0;
	scanf("%d",&a);
	while(a>=0)
	{
		if(a<60)
			printf("%d\n",a);
		if(a<0)
			break;
		sum=sum+a;
		i=i+1;
		scanf("%d",&a);
	}
	m=sum/i;
	printf("%f",m);
}
