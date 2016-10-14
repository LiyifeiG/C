#include <stdio.h>
#include <string.h>
main()
{
	int i,j;
	char str[3][10],a[10];
	for(i=0;i<3;i++)
		scanf("%s",str[i]);
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(a,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],a);
			}
		}
	}
	for(i=0;i<3;i++)
		printf("%s\n",str[i]);
}
