/*2、输入一个数，判断它能否被3,5整除,并输出以下信息之一:      
   1)能同时被3,5整除
   2)能被其中一个数(要指出哪一个数)整除
   3)不能被3,5任一个数整除*/
   #include <stdio.h>
   main()
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




}
