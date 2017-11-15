#include <stdio.h>
main(){
	int a,n,i=1,sum=0,x=0;
	scanf("%d %d",&a,&n);
	for(;i<=n;i++)
	{
		x=x*10+a;
		sum+=x;
	}
	printf("%d",sum);
	
}
