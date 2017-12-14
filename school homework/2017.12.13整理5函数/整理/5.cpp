#include <stdio.h>
int fx(int x){
	int s=0;
	for(;x/10!=0;x/=10)
	s=s*10+x%10;
	s=s*10+x;
	return(s);
}
main(){
	int x,s;
	scanf("%d",&x);
	s=fx(x);
	printf("%d",s);
	
}
