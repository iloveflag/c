#include <stdio.h>
main(){
	int a[10],i,t;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<9;i++)
	{
		if(a[i]>a[i+1])
		{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		}
	}
	printf("%d\n",a[9]);
}

