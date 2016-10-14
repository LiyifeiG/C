#include <stdio.h>
main()
{
	int i,j,m,n,p,q,k;
	int a[10];
	int b[10];
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	k=0;
	for(i=0;i<10;i++)
	{
		m=a[i]/1000;
		n=(a[i]-m*1000)/100;
		p=(a[i]-m*1000-n*100)/10;
		q=a[i]%10;
		if((m+p)==(n+q))
		{
				b[k]=a[i];
				k++;
		}
	}
	for(j=0;j<k;j++)
		printf("%d ",b[j]);
} 
