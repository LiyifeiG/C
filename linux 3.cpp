#include <stdio.h>
#include <string.h>
void func(char s[100])
{
	printf("%d\n",(int)sizeof(s));
}
main()
{
	char s[]="welcom to Xiyoulinuxgroup!";
	printf("%d\n",(int)sizeof(s));
	printf("%d\n",(int)strlen(s));
	char*p=s;
	printf("%d\n",(int)sizeof(p));
	func(s);
	return 0;
} 
