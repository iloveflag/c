#include <stdio.h>
int gbs(int x,int y){
	int t,i;
	for(i=x<y?x:y;i<1000;i++)
	if(i%x==0&&i%y==0)
	{
		t=i;
		break;
	}
	return(t);
}
main(){
	int x,y,t;
	scanf("%d %d",&x,&y);
	t=gbs(x,y);
	printf("%d",t);
	
}
