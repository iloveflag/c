#include <stdio.h>
int jc(int n){
	int i,t;
	if(n==1)
	t=1;
	else
	t=n*jc(n-1);
}
main(){
	int n,t;
	scanf("%d",&n);
	t=jc(n);
	printf("%d",t);
}
