#include <stdio.h>
#include <string.h> 
void fuzhi (char a[10],char b[10])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			{
				b[j]=a[i];
				j++;
			}
	}
	b[j]='\0';
}
main()
{
	char arr[10],c[10];
	scanf("%s",arr);
	fuzhi(arr,c);
	printf("%s",c);
}
