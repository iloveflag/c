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
