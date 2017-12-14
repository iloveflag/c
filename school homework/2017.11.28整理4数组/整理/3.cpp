#include <stdio.h>
main(){
	int a[10],i,m,n,t;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		m++;
		else if(a[i]<0)
		n++;
		else
		t++;
	}
	printf("%d %d %d",m,n,t);
	
}
