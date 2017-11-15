#include <stdio.h>
main(){
	int x,y,i,max;
	scanf("%d %d",&x,&y);
	max=x;
	if(y>max)
	max=y;
	for(i=max;i<10000000;i++)
	{
		if(i%x==0&&i%y==0)break;
	
	}
	printf("%d",i) ;
}
