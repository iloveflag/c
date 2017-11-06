#include <stdio.h>
main(){
	int x,i;
	scanf("%d",&x);
	for(i=0;x!=0;x/=10)
	i++;
	printf("%d",i);
} 
