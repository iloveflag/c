#include <stdio.h>
main(){
	int x,t,sum=0;
	scanf("%d",&x);
	for(;x/10!=0;x/=10)
	{
		t=x%10;
		sum+=t;
	}
	printf("%d",sum+x);
}
