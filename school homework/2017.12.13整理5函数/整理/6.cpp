#include <stdio.h>
int jc(int x){
	int i,sum=1;
	for(i=1;i<=x;i++)
	sum*=i;
	return(sum);
}
main(){
	int x,sum;
	scanf("%d",&x);
	 sum=jc(x);
	 printf("%d",sum);
}
