#include <stdio.h>
main(){
int a[10],i,j,t;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(j=0;j<9;j++)
{
	for(i=0;i<9;i++)
	{
		if(a[i]>a[i+1])
		{
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
		}
		
	}
}
for(i=0;i<10;i++)
printf("%d\n",a[i]);
for(i=9;i>=0;i--)
printf("%d\n",a[i]);
}
