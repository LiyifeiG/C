#include <stdio.h>
void shulie(int a[10])
{
	int i;
	for(i=2;i<10;i++)
	{
		int n;
		n=a[i-1]*a[i-2];
		if(n<10)
			a[i]=n;
		else
		{
			a[i]=n/10;
			a[++i]=n%10;
		}
	}
	for(i=0;i<9;i++)
		printf("%d\n",a[i]);
	printf("%d",a[9]); 
}
main()
{
	int a[10]={2,3};
	shulie(a);
}
