//4、输入公元后的年份，计算并输出该年的生肖。已知公元1年是鸡年。（12生肖排序：鼠，牛，虎，兔，龙，蛇，马，羊，猴，鸡，狗，猪）
#include <stdio.h>
main()
{
	int a,t;
	scanf("%d",&a);
	t=a%12;
	switch(t)
	{
	case 0:printf("猴");break;
	case 1:printf("鸡");break;
	case 2:printf("狗");break;
	case 3:printf("猪");break;
	case 4:printf("鼠");break;
	case 5:printf("牛");break;
	case 6:printf("虎");break;
	case 7:printf("兔");break;
	case 8:printf("龙");break;
	case 9:printf("蛇");break;
	case 10:printf("马");break;
	case 11:printf("羊");break;
	}
}
