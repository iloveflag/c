#include <stdio.h>
#include <math.h>
main(){
	int a[10],i,sum,min;
	float t;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		sum+=a[i];
	t=sum/10.0;
	min=a[0];
	for(i=1;i<10;i++)
	{
		if(fabs(a[i]-t)<fabs(min-t))
		min=a[i];
	}
	printf("%d",min);
	
	
	
	
}
