#include <stdio.h>
main(){
	int x,i;
	for(x=100;x<1000;x++)
	{
		for(i=2;i<x;i++)
		{
		if(x%i==0)
		break;
		}
		if(x==i)
		printf("%d\n",x);
	}
	
	
}
