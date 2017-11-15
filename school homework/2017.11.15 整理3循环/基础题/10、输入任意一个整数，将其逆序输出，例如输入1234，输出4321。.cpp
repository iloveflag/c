#include <stdio.h>
main(){
	int x,s=0;
	scanf("%d",&x);
	while(x!=0)
	{
		s=s*10+x%10;
		x/=10;
	}
	printf("%d",s);
}
