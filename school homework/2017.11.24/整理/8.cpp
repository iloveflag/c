#include <stdio.h>
#include <math.h>
main(){
	int a[10],i,min,sum=0,t;
	float s;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		sum+=a[i];
	s=sum/10.0;
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(fabs(a[i]-s)<fabs(min-s))
		min=a[i];	
	}
	printf("%d",min);
		
}
