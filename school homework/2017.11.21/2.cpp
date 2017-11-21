#include <stdio.h>
main(){
	int a[11],i,x,j,max,t;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;	
			}
		}
	}//排序 
	printf("输入一个数");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(x<a[i])break;
	}
	for(j=9;j>=i;j--)
	{
		a[j+1]=a[j];
	}
	a[i]=x;
	for(i=0;i<11;i++)
	printf("%d\n",a[i]);
	
	
	
}
