#include <stdio.h>
int jc(int x){
	int i,sum=1;
	for(i=1;i<=x;i++)
	sum*=i;
	return(sum);
}
main(){
	int i,s=0;
	for(i=1;i<=5;i++)
	s+=jc(i);
	printf("%d",s);
}
