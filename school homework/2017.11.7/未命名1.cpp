#include <stdio.h>
main(){
	int x,t,i,max;
	scanf("%d",&x);
	max=x;
	for(i=2;i<=10;i++)
	{
		scanf("%d",&t);
		if(t>max)
		max=t;
	}
	printf("%d",max);
	
	
	
}
