#include<stdio.h>
int temp(int x,int y,int z)
{
	int i,p=0;
	int months[]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(x%400==0||(x%4==0&&x%100!=0))
	months[1]+=1;
	for(i=0;i<y-1;i++)
	{
		p+=months[i]; 
	}
	return(p+z);
}
main()
{
	int year,month,day,t;
	scanf("%d %d %d",&year,&month,&day);
	t=temp(year,month,day);
	printf("%d\n",t);	
} 
