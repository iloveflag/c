#include <stdio.h>
int main()
{
int s;
printf("请输入一个三位数:");
scanf("%d",&s);
int c=s%10;
int b=s/10%10;
int a=s/100;
printf("它的逆数是:%d",a+b*10+c*100);  
 } 
