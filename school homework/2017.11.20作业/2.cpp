#include <stdio.h>
main(){
	int a[11],t,i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]); 
	printf("输入一个数\n");
	scanf("%d",&a[10]);
	for(i=10;i>0;i--)
	{
		if(a[i]<a[i-1])
		{
		t=a[i];
		a[i]=a[i-1];
		a[i-1]=t;
		}
		
	}
	for(i=0;i<11;i++)
	printf("%d\n",a[i]);
}

