#include <stdio.h>
main(){
	int x,sum=0,i;
	scanf("%d",&x);
	for(i=1;i<x;i++)
	{
		if(x%i==0)
		sum+=i;
	}
	if(sum==x)
	printf("ÊÇÍêÊý"); 
}
