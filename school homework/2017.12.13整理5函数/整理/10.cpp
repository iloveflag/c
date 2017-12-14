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
	int x,y,i,t,cnt=0;
	scanf("%d %d",&x,&y);
	for(i=x;i<=y;i++)
	{	t=0;
		t=sushu(i);
		if(t==1)
		cnt++;
	}
	printf("%d",cnt);
}
