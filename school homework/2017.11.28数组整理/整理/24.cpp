#include <stdio.h>
main(){
 int a[5][5],b[5],i,j,max;
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
	 scanf("%d",&a[i][j]);
 }
 for(i=0;i<5;i++)
 {	max=a[i][0];
	 for(j=0;j<5;j++)
	 {
		if(max<a[i][j])
			max=a[i][j];
	 
	 
	 }
	 b[i]=max;
 }
 for(i=0;i<5;i++)
	 printf("%d\n",b[i]);

}
