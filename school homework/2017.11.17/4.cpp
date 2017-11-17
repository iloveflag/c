#include <stdio.h>
main(){
	int a[10],i,j,t;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
		for(j=0;j<9;j++)
		{
			for(i=j+1;i<10;i++)
			{
				if(a[i]<a[j])
				{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
				}
			}                                                                                  
		}
	printf("%d\n",a[9]);
}

