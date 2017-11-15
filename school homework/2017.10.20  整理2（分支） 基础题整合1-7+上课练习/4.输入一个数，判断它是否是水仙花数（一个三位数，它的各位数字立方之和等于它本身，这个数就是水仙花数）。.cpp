//4.输入一个数，判断它是否是水仙花数（一个三位数，它的各位数字立方之和等于它本身，这个数就是水仙花数）。
#include <stdio.h>
main()
{
   int x,a,b,c,t;
   scanf("%d",&x);
   a=x/100;
   b=x%100/10;
   c=x%10;
   t=a*a*a+b*b*b+c*c*c;
	if(x==t)
	   printf("ok");

}  
