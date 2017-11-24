#include <stdio.h>
#include <math.h>
main(){
	int a[10],i,x,sum=0;
	float t,m;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	sum+=a[i];
	}
	t=sum/10.0;
	m=fabs(t-a[0]);
	for(i=1;i<10;i++)
	{
		if (m>fabs(t-a[i]))
		{
		m=fabs(t-a[i]);
		x=i;
		}
	}
	printf("%d",a[x]);
	
}
