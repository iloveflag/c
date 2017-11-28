#include <stdio.h>
#include <string.h>
main(){
	char a[100]="china today";
	int s;
	s=strlen(a);
	char b[100];
	int  in,l,i,j;
	scanf("%d %d",&in,&l);
	if(in+l<s)
	{
		for(i=in-1,j=0;j<l;i++,j++)
		b[j]=a[i];
		b[j]=0;
	}
	
	printf("%s",b);
}
