#include <stdio.h>
	int old (int x);
main(){

	int x,t;
	scanf("%d",&x);
	t=old(x);
	printf("%d",t);
}
int old (int x){
	int t;
	if(x==1) 
	t=3;
	else
	t=old(x-1)+2;
	return(t);
	}
