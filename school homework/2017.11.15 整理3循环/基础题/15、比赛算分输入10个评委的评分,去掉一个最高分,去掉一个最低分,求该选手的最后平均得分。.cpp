#include <stdio.h>
main(){
	int x,i=1;
	float max,min,sum;
	for(;i<=10;i++)
	{
	scanf("%d",&x);
		if(i==1)
			{
			max=x;
			min=x;
			}
		if(max<x)
			max=x;
		if(min>x)
			min=x;
		sum+=x;
		
	}
	printf("%f",(sum-max-min)/8);
	
	
	
}
