#include <stdio.h>
int main()
{
	char name[5][10]={"wang","liu","su","lei","zhang"};
	int i;
	for(i=0;i<5;i++)
	{
		printf("%s\n",name[i]);
	}
}
