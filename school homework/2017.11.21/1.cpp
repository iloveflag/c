#include <stdio.h>
#include <math.h>
main(){
	int a[10],i,sum=0,x=0;
	float t,m,;
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	sum+=a[i];
	}
	t=sum/10.0;
	m=fabs(a[0]-t);
	for(i=0;i<10;i++)
	{
		if(m>fabs(a[i]-t))
		{
			m=fabs(a[i]-t);
			x=i;
		}
	}
	printf("%d",a[x]);
	
	
}
