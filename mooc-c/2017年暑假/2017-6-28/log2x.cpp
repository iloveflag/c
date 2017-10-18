#include <stdio.h>
int main (){
	int x;
	scanf("%d",&x);
	int ret=0;
	int t=x;
	while(x>1){
		x/=2;
		ret++;
	}
	printf("%dµÄlog2Îª%d",t,ret);
	return 0;
} 
