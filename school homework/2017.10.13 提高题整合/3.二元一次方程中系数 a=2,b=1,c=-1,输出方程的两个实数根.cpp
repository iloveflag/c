//二元一次方程中系数 a=2,b=1,c=-1,输出方程的两个实数根
#include <stdio.h>
#include <math.h>
main()
{
	float a=2,b=1,c=-1,t,x1,x2;
	t=sqr((b^2-4*a*c))
	x1=(-b+t)/2*a;
	x2=(-b-t)/2*a;
	printf("%f %f",x1,x2);
	
	
 } 
