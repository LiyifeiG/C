#include <stdio.h>
main()
{
	int i,n,m,first,second;
	scanf("%d", &n);
	int a[1000];
	for (i = 0; i < n;i++)
	{
		scanf("%d", &m);
		a[i] = m;
	}
	if (a[0]>a[1])
	{
		first = a[1];
		second = a[0];
	}
	else
	{
		first = a[0];
		second = a[1];
	}
	for (i = 2; i < n;i++)
	{
		if (a[i]<first)
		{
			second = first;
			first = a[i];
		}
		else if (a[i]>second)
		{
			second = a[i];
		}
	}
	printf("%d %d", first, second);

}
