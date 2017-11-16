
#include <stdio.h>
main(){

int x,y,i,t;
scanf("%d %d",&x,&y);
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		break;
	}
	if(x==i)
		printf("是素数");


		for(t=2;t<y;t++)
	{
		if(y%t==0)
		break;
	}
	if(y==t)
		printf("是素数");

}
