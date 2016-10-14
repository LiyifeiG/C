#include<stdio.h>
main()
{
	int x,y,s,t,i,b;
	scanf("%d%d",&x,&y);
	for(t=x;t<=y-2;t++)
	   {
	   		b=1;
			for(i=2;i<t;i++)
			if(t%i==0) 
			{
				b=0;
				break;
			}
			if(b==1)
			{
				for(i=2;i<t+2;i++)
				if((t+2)%i==0)
				{
					b=0;
					break;
				}
				if(b==1)
				printf("(%d,%d)",t,t+2);
			}
		}
		
}

