#include <stdio.h>
main(){
	char a[100],b[100];
	int m,n,i,j;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	m++;
	for(j=0;b[j]!='\0';j++)
	n++;
	for(i=m,j=0;j<n;i++,j++)
	a[i]=b[j];
	printf("%d %d\n",m,n);
	printf("%s",a);
}
