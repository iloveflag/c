#include <stdio.h>
main(){
	int x,sum=0;
	for(x=0;x<=100;x++)
	{
		if(x%3==0)
		sum+=x; 
	}
	printf("%d",sum);
}
