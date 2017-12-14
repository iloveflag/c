#include <stdio.h>
int jws(int x){
	int cnt=1;
	for(;x/10!=0;x/=10)
	cnt++;
	return(cnt);
}
main(){
	int x,n;
	scanf("%d",&x);
	n=jws(x);
	printf("%d",n);
} 
