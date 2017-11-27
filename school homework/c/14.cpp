#include <stdio.h>
main(){
	char a[100];
	char b[100];
	int m,n,t,i,k;
	scanf("%s",a);
	scanf("%s",b);
	for(m=0;a[m];m++)
	for(n=0;b[n];n++)
	t=m>n?n:m;
	i=0;
	while(i<t)
	{
		if(a[i]>b[i]){k=1;break;}
		if(a[i]<b[i]){k=-1;break;}
		i++;
	}
	if(i==t)
	{
		if(m>n)k=1;
		if(m<n)k=-1;
		if(m==n)k=0;
	}
	if(k==1)
		printf("%s",a);
	if(k==-1)
		printf("%s",b);
	if(k==0)
		printf("Ò»Ñù´ó");
	printf("%d",k);
}
