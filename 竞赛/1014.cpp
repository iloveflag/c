#include <stdio.h>
main()
{
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	t=a;
	if(a<b)
	t=b;
	if(t<c)
	t=c;
	printf("%d",t);
}
