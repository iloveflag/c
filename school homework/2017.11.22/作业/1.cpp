#include <stdio.h>
main(){
	char a[100];
	int i,j,t,x,cnt;
	scanf("%s",a);
	for(cnt=0;a[cnt];cnt++)
	for(j=0;j<cnt;j++)
	{
		for(i=0;i<cnt-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	printf("%s",a);
}
	
	
	

