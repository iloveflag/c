#include <stdio.h>
main(){
 int a[5][5],b[5],i,j,min;
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
	 scanf("%d",&a[i][j]);
 }
 for(j=0;j<5;j++)
 {	min=a[0][j];
	 for(i=0;i<5;i++)
	 {
		if(min>a[i][j])
			min=a[i][j];
	 
	 
	 }
	 b[j]=min;
 }
 for(i=0;i<5;i++)
	 printf("%d\n",b[i]);

}
