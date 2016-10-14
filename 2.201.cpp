#include <stdio.h>
int main()
{
	int year;
	printf("请输入年龄:");
	scanf("%d",year);
	if(year>=22&&year<=30)
		printf("外勤业务员");
	else if(year>=31&&year<=45)
		printf("内勤文员");
	else if(year>=46&&year<=55)
		printf("仓库管理员");
	else if(year>=56)
		printf("退休"); 
}
