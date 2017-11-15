#include <stdio.h>
main(){
	int a[10],i,m=0,n=0,y=0;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]>0)
		m++;
		else (a[i]=0)
		y++;
		else
		n++;
	}
	printf("%d %d %d",m,n,y);
}
