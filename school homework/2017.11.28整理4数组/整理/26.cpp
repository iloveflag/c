#include <stdio.h>
main(){
	int a[5][3],b[5],i,j,sum=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	{	sum=0;
		for(j=0;j<3;j++)
		sum+=a[i][j];
		b[i]=sum;
	}
	for(i=0;i<5;i++)
	printf("%d\n",b[i]);
}
