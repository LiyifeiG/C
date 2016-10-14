#include <stdio.h>
#include <string.h> 
char fuzhi (char a[20])
{
	int i,n,j;
	char b[20];
	j=0;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	printf("%s",b);
}
main()
{
	char arr[20];
	scanf("%s",arr);
	fuzhi(arr);
}
