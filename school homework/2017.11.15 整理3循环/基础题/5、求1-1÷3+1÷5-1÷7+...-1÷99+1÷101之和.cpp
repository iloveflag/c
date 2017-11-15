#include <stdio.h>
main(){
	int cnt=0;
	float x,sum=0;
	for(x=1;x<=10;x+=2)
	{
		cnt++;
		if(cnt%2!=0)
		sum+=1/x;
		else
		sum-=1/x;
	}
	printf("%f",sum);
	
}
