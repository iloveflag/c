#include <stdio.h>
main(){
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=i;j<=i*i;j+=i)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
