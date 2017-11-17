#include <stdio.h>
main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if(10000<=m && m<=20000 && 2000<=n && n<=10000)
	{
		if(m%n==0)
		printf("%d",m/n);
		if(m%n!=0)
		printf("%d",m/n+1);
	}
	
}
