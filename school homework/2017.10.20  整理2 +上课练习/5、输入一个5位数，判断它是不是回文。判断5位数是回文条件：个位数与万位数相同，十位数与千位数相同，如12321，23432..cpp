//5、输入一个5位数，判断它是不是回文。判断5位数是回文条件：个位数与万位数相同，十位数与千位数相同，如12321，23432.
#include <stdio.h>
main()
{
	int x,a,b,c,d,f;
	scanf("%d",&x);
	a=x/10000;
	b=x/1000%10;
	c=x/100%10;
	d=x%100/10;
	f=x%10;
	if(a==f && b==d )
	{
		printf("ok");
	}
	else
	{
		printf("no");
	}
	


}  
