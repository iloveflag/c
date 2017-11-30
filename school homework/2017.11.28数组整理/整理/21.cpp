#include <stdio.h>
main(){
	int a[5][5],i,j,sum1=0,sum2=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	sum1+=a[i][i];
	printf("%d\n",sum1);
	for(i=0;i<5;i++)
	sum2+=a[i][4-i];
	printf("%d",sum2);
	
}
