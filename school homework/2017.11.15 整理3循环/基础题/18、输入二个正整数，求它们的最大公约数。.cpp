#include <stdio.h>
main(){
	int x,y,i,t,min;
	scanf("%d %d",&x,&y);
	min=x;
	if(y<min)
	min=y;
	for(i=1;i<=min;i++)
	{
		if(x%i==0&&y%i==0)
		t=i;
	}
	printf("%d",t) ;
}
