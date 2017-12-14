#include <stdio.h>
int bj(int x,int y){
	int max=x>y?x:y;
	return(max);
} 
main(){
	int x,y,max;
	scanf("%d %d",&x,&y);
	max=bj(x,y);
	printf("%d",max);
}
