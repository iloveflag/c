#include <stdio.h>
int main()
{
int s;
printf("������һ����λ��:");
scanf("%d",&s);
int c=s%10;
int b=s/10%10;
int a=s/100;
printf("����������:%d",a+b*10+c*100);  
 } 
