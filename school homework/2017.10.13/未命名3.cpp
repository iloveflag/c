//��Ԫһ�η�����ϵ�� a=2,b=1,c=-1,������̵�����ʵ����
#include <stdio.h>
main()
{
	int a=2,b=1,c=-1,x1,x2;
	x1=(-b+(b^2-4*a*c))/2*a;
	x2=(-b-(b^2-4*a*c))/2*a;
	printf("%d %d",x1,x2);
	
	
 } 
