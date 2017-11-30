#include <stdio.h>
main(){
	int a[11],x,i,j,k,t;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(j=0;j<9;j++)
	{
		for(i=0;i<9;i++)
		{	if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("插入一个数");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(x<a[i])
		break;
	}
	for(k=9;k>=i;k--)
	a[k+1]=a[k];
	a[i]=x;
	for(i=0;i<11;i++)
	printf("%d\n",a[i]); 
} 
