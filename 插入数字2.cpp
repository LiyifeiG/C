#include <stdio.h>
int main()
{
	int i,j,b,k,r;
	int a[9];
	for(i=0;i<9;i++)
		scanf("%d",&a[i]); 
	scanf("%d",&b);
	for(j=0;j<9;j++)
	{
		if(b >= a[j] && b <= a[j+1])
			break;
	}
	for(k=0;k<=j;k++)
		printf("%d\n",a[k]);
	printf("%d\n",b);
	for(r=j+1;r<9;r++)
	{
		if(r==8)
			printf("%d",a[8]);
		else
			printf("%d\n",a[r]);
	}
}

