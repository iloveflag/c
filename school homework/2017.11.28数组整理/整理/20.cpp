#include <stdio.h>
main(){
	int a[3][4],i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		sum+=a[i][j];
	}
	printf("%d",sum);
} 
