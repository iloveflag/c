//6、输入员工的工资，输出应纳税款。规则是： 工资<=3500不纳税；超过3500部分的3%是应纳税款。 
#include <stdio.h>
main()
{
	int x,t;
	scanf("%d",&x);
	if(x <= 3500)
	{
	 printf("不用纳税");  
	}
	else
	{
	t=(x-3500)*0.03;
	printf("应该纳税%d元",t);
	}


}
