//设计一个外币换算器，要求根据输入的人民币X元及外币对人民币的汇率Y 
//（如：1美元可以兑换人民币6.35元，则美元对人民币的汇率就是6.35），输出相应的外币数量 
#include <stdio.h>
main (){
float x,y;
scanf("%f %f",&x,&y);
printf("%f",x/y);
}
