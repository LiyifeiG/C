#include <stdio.h>
int main()
{
	int year;
	printf("����������:");
	scanf("%d",year);
	if(year>=22&&year<=30)
		printf("����ҵ��Ա");
	else if(year>=31&&year<=45)
		printf("������Ա");
	else if(year>=46&&year<=55)
		printf("�ֿ����Ա");
	else if(year>=56)
		printf("����"); 
}
