//3、输入一个年份，判断它是否是闰年，输出是闰年或不是闰年。
#include <stdio.h>
main()
{
	 int x,t;
	 scanf("%d",&x);
	 
	 if((x%4==0 && x%100 !=0)||(x%400==0))
	 {
		printf("是闰年");
	 }
	 else
	 {
		printf("不是闰年");
	 }
}
