#include <stdio.h>
int main()
{
	int x,y,n,i,a,flag;
	scanf("%d%d",&x,&y);
	for(n=x;x<=y-2;x++)
	{
		flag=1;
		for(i=2;i<n;i++)
		{
		
		  if(n%i==0)
		  {
			flag=0;
			break;
		  }
		  if(flag==1)
			{
				a=n+2;
				for(i=2;i<a;i++)
				if(a%i==0)
				{
					flag=0;
					break;
				}
				if(flag==1)
				printf("(%d,%d)",n,a);
			}
		}
	}
} #include <stdio.h>
int main()
{
	int x,n,s,a;
	scanf("%d%d",&x,&n);
	s=0;
	a=x+n;
	while(x<a)
	{
		s=s+x;
		x=x+1;
	}
	printf("%d",s);
}
