//7、输入三个数a,b,c，判断 a是否是b，c的公约数。
#include <stdio.h>
main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b%a==0 && c%a==0)
	{
	printf("ok");
	}
	else
	{
	printf("no");
	}
}
