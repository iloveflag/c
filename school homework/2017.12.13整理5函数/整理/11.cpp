#include <stdio.h>
int he(int x){
	int i,s;
	for(i=1;i<=x;i++)
	if(x==1)
	s=1;
	else
	s=he(x-1)+x;
	return(s);
}
main(){
	int n,s;
	scanf("%d",&n);
	s=he(n);
	printf("%d",s);
	
}
