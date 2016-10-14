#include <stdio.h> 
#include <string.h>
main()
{
	int i,j,n;
	int k=0;
	char temp,str[]={"abababab"},newstring[]={"abababab"};
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]!='1')
		{
			temp=str[i];
			for(j=0;j<n;j++)
			{
				if(str[j]==temp)
				{
					newstring[k++]=str[j];
					str[j]='1';
				}
			}
		}
	}
		printf("%s",newstring);
}
