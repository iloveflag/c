#include <stdio.h>
main()
{
	int n,s=0,t,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	t=1;
		for(j=1;j<=i;j++)
		{
		
		t=t*j;
		
		}
		s+=t;
	}
	printf("%d",s);
	
	
}
