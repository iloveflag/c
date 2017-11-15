/*main()
{
	char a;
	scanf("%c",&a);
	if(a>=95 && a<=122)
		printf("小写");
	else if(a>=65 && a<=90)
		printf("大写");
		else if(a>=48 && a<=57)
			printf("数字");
			else
				printf("其它字符");
}*/

/*main()
{
	int x,t;
	scanf("%d",&x);
	t=x/10;
	if(x==100) t=9;
	switch(t)
	{
	case 9:printf("a");break;
	case 8:printf("b");break;
	case 7:printf("c");break;
	case 6:printf("d");break;
	case 5:printf("e");break;
	case 4:printf("f");break;
	case 3:printf("g");break;
	case 2:printf("h");break;
	case 1:printf("i");break;
	case 0:printf("j");break;
	default:printf("输入有误");
	
	}
}*/
/*main()
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



}*/
/*main()
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

/*main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
		printf("同时被3,5整除");
	if(a%3==0 && a%5!=0)
		printf("只能被3整除");
	if(a%3!=0 && a%5==0)
		printf("只能被5整除");
	if(a%3!=0 && a%5!=0)
		printf("不能被3,5整除");




}*/


/*#include <stdio.h>
#include <math.h>
main()
{
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a)
{
	if(a==b,b==c)
	printf("等边三角形");
	else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(a,2)+pow(b,2))
		printf("直角三角形");
	else
		printf("一般三角形");

}
else
printf("无法构成三角形");

}*/

main()
{
	int a,t;
	scanf("%d",&a);
	t=a%12;
	switch(t)
	{
	case 0:printf("猪");break;
	case 1:printf("鼠");break;
	case 2:printf("牛");break;
	case 3:printf("虎");break;
	case 4:printf("兔");break;
	case 5:printf("龙");break;
	case 6:printf("蛇");break;
	case 7:printf("马");break;
	case 8:printf("羊");break;
	case 9:printf("猴");break;
	case 10:printf("鸡");break;
	case 11:printf("狗");break;
	

	
	}




}
