//1.输入任意三个整数a、b、c，输出其中最大的数。
#include <stdio.h>
main()
{
int a,b,c,t;
scanf("%d %d %d",&a,&b,&c);
t=a;
if(t<b)
{
	t=b;
}
if(t<c)
{
	t=c;
}
printf("%d",t);
}
