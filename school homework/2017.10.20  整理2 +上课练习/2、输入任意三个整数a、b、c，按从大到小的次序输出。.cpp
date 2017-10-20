//2、输入任意三个整数a、b、c，按从大到小的次序输出。
#include <stdio.h> 
main()
{

int a,b,c,t;
scanf("%d %d %d",&a,&b,&c);

if(a<b)
{
	t=a;
	a=b;
	b=t;
}
if(a<c)
{
	t=c;
	a=c;
	c=t;
}
if(b<c)
{
	t=b;
	b=c;
	c=t;
}

printf("%d %d %d",a,b,c);

}
