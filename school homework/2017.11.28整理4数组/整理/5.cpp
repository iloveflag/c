#include <stdio.h>
main(){
	int a[10],i,t;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		t=a[i];
		a[i]=a[9-i];
		a[9-i]=t;
	}
	for(i=0;i<10;i++)
	printf("%d\n",a[i]);
	
	
}
