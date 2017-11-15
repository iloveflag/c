#include <stdio.h>
main(){
	int x,cnt=1;
	scanf("%d",&x);
	for(;x/10!=0;x/=10)
	cnt++;
	printf("%d",cnt);
}
