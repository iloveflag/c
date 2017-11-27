#include <stdio.h>
main(){
	int a[10],i,max,min,sum=0;
	float s;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=min=a[0];
	for(i=0;i<10;i++)
	{	sum+=a[i];
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	s=(sum-min-max)/9.0;
	printf("%f",s);
	
	
	
	
} 
