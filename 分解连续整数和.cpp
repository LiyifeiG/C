#include <stdio.h>
main()
{
	int i,j,k,m,n,a,x,y,p,q;
	int flag=0;
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			m=((i+j)*(j-i+1))/2;    //等差数列求和 
			if(m==a)
			{
				flag=1;
				printf("%d=",a);
				x=i;
				y=j;
				for(p=x;p<=y;p++)
				{
					if(p<y)
					printf("%d+",p);
					else
					printf("%d\n",p);
				}
				break;
			}
		}
	}
	if(flag==0)
	printf("NONE");
}
