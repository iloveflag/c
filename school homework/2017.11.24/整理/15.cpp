#include <stdio.h>
main(){
	int a[10],i,x,k,cnt=0;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("输入一个数");
	scanf("%d",&x);
	for(i=0;i<10-cnt;i++)
	{
		if(a[i]==x)
		{
			cnt++;
			for(k=i;k<10-cnt;k++)
			a[k]=a[k+1];
			i=i-1;
		}
	}
	for(i=0;i<10-cnt;i++)
	printf("%d\n",a[i]);
	
	
	
	
}
