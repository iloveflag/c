#include <stdio.h>

int main()

{

int sanweishu;

printf("");

scanf("%d",&sanweishu);

int c=sanweishu%10;

int a=sanweishu/100;

int b=sanweishu-a*100-c;

printf("%d",a+b+c*100);  

 }?
