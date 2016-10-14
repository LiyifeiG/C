#define PI 3.14159
#include <stdio.h>
int main()
{
	float r,s,l;
	printf("请输入圆的半径:");
	scanf("%f",&r);
	s=PI*r*r;
	l=2*PI*r;
	printf("面积=%6.3f,周长=%6.3f \n",s,l); 
} 
