//3、输入三个数a,b,c,判断这三个数能否构成三角形的三条边。若能则输出三角形的类型。（等边、直角三角形、一般三角形）
#include <stdio.h>
#include <math.h>
main()
{
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a)
{
	if(a==b,b==c)
	printf("等边三角形");
	else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(a,2)+pow(b,2))
		printf("直角三角形");
	else
		printf("一般三角形");

}
else
printf("无法构成三角形");

}
