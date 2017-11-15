#include <stdio.h>
main(){
	int a[10],i;
	float sum,max,min;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	sum=a[0];
	for(i=1;i<10;i++)
	{	sum+=a[i];
		if(a[i]>a[i-1])
		max=a[i];
		else
		min=a[i];
	}
	printf("%f",(sum-max-min)/9);
	
	
	
}
