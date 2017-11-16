#include <stdio.h>
main(){
	int i,j,s;
	for(i=100;i<1000;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			s+=j;
		}
		if(i==s)
		printf("%d",i);
	}
}
