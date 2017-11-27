#include <stdio.h>
main(){
	char a[100],x,i,j,t,m;
	scanf("%s",a);
	for(m=0;a[m];m++)
	for(j=0;j<9;j++)
	{
		for(i=0;i<9;i++)
		{	if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<m;i++)
	printf("%s",a);
}
