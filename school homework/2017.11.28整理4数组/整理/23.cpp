#include <stdio.h>
main(){
int b[5][5],a[5],i,j,sum;
for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
		scanf("%d",&b[i][j]);

}
for(i=0;i<5;i++)
{	sum=0;
	for(j=0;j<5;j++)
	sum+=b[i][j];
	a[i]=sum;
}
for(i=0;i<5;i++)
printf("%d\n",a[i]);
}
