#include <stdio.h>
#include <math.h>
main(){
	int x,x1,cnt,sum=0,t,y;
	scanf("%d",&x);
	x1=x;
	for(cnt=0;x!=0;x/=10)
	cnt++;
	printf("%d\n",cnt);
	cnt-=1;
	for(;cnt>0;cnt--)
	{
		y=pow(10,cnt);
		t=x1/y;
		sum+=t;
		x1-=y*t;
	}
	sum+=x1;
	printf("%d",sum);
	
	
}
