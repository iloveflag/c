#include <stdio.h>
main(){
	int a[5][5],i,j,max;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	}
	max=a[0][0];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
	}
	printf("%d",max);
}
