#include <stdio.h>
main(){
	int a[5][5],i,j,min;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		scanf("%d",&a[i][j]);
	}
	for(j=0;j<5;j++)
	{	min=a[0][j];
		for(i=0;i<5;i++)
		{
			if(a[i][j]<min)
			min=a[i][j];
		}
		printf("%d\n",min);
	}
	
	
}
