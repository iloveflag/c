#include <stdio.h>
int sushu(int x){
	int i,t;
	for(i=2;i<x;i++)
	if(x%i==0)
	break;
	if(x==i)
	t=1;
	else
	t=-1;
	return(t);
}
main(){
	int x,t;
	scanf("%d",&x);
	t=sushu(x);
	if(t==1)
	printf("是素数");
	else
	printf("不是素数"); 
}
