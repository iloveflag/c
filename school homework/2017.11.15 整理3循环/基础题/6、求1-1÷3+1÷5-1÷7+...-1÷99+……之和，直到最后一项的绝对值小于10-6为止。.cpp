#include <stdio.h>
#include <math.h>
main(){
	int cnt=0;
	float x,sum=0;
	for(x=1;1/x>fabs(pow(10,-6));x++)
	{
		cnt++;
		if(cnt%2!=0)
		sum+=1/x;
		else
		sum-=1/x;
	}
	printf("%f\n",sum);

}
