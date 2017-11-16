#include <stdio.h>
main(){
	int x,i,max,min;
	for(i=1;i<=10;i++)
	{	scanf("%d",&x);
		if(i==1)
		{
		max=x;
		min=x;
		}
		if(x>max)
		max=x;
		if(x<min)
		min=x;
	}
	printf("%d %d",max,min);
}
