#include <stdio.h>
int he(int b[]){
	int i,s=0;
	for(i=0;i<10;i++)
	s=s+b[i];
	return(s);
}
main(){
	int a[10],i,s;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	s=he(a);
	printf("%d",s);
}
