#include <stdio.h>
main(){
	int x,m=0,n=0;
	scanf("%d",&x);
	while(x!=0)
	{
		
		if(x>0)
		m++;
		else
		n++;
		scanf("%d",&x);
	}
	printf("%d %d",m,n);
}
