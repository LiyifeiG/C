#include <stdio.h>
#include <string.h>
main()
{
	int a,n,i;
	char str[5];
	gets(str);
	n=strlen(str);
	printf("%d\n",n);
	for(i=0;i<n;i++)
		printf("%c ",str[i]);
	printf("\n");
	for(i=n-1;i>=0;i--)
		printf("%c ",str[i]); 
} 
