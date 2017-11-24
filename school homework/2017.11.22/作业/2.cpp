#include <stdio.h>
main(){
	char a[100];
	char b[100];
	scanf("%s",a);
	scanf("%s",b);
	int m,n,i,t;
	for(m=0;a[m];m++)
	for(n=0;a[n];n++)
	for(i=0;i<m;)
	{
		if(a[i]>b[i])
		{
			t=1;
			break;	
		}
		
		else if(a[i]<b[i])
		{
			t=0;
			break;
		}
		else
		i++;
	}
	if(t==1)
	printf("%s",a);
	if(t==0)
	printf("%s",b);
}
