#include <stdio.h>
int zdz(int b[]){
	int i,max;
	max=b[0];
	for(i=0;i<10;i++)
	if(b[i]>max)
	max=b[i];
	return(max);
	
}
main(){
	int a[10],i,max;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=zdz(a);
	printf("%d",max);
}
