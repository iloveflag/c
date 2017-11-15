//1.从键盘输入两个整数及一个运算符(加、减、乘、除)， 求其结果并输出。（分别用if else和switch语句完成）
#include <stdio.h>
main()
{
 int a,b;
 char c;
 scanf("%d%c%d",&a,&c,&b);
 switch(c)
 {
 case 43:printf("%d",a+b);break;
 case 45:printf("%d",a-b);break;
 case 42:printf("%d",a*b);break;
 case 47:printf("%d",a/b);break;
 default:printf("no");
 
 
 }



}
/*
#include <stdio.h>
main()
{
 int a,b;
 char c;
 scanf("%d%c%d",&a,&c,&b);
if(c==43)
	 printf("%d",a+b);
if(c==45)
	printf("%d",a-b);
if(c==42)
	printf("%d",a*b);
if(c==47)
	printf("%d",a/b);
}
*/

