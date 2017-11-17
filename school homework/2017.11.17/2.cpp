#include <stdio.h>
main(){
	int a[10],i,t;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]<a[0])
		{
		t=a[i];
		a[i]=a[0];
		a[0]=t;
		}
	}
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	
	
}
