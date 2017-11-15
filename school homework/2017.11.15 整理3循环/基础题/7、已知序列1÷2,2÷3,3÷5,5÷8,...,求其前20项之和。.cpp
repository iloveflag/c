#include <stdio.h>
main(){
	float i=1,j=2,t,cnt=1,sum=i/j;

	for(;cnt<=20;cnt++)
	{
		t=i+j;
		i=j;
		j=t;
		sum+=i/j;
	}
	printf("%f",sum);
}
