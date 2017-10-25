#include <stdio.h>
main()
{
	int p,q,m;
	scanf("%d %d %d",&p,&q,&m);
	if(100<=p && p<=q && p<=100000)
	{
		if(p<=m&&m<=q)
		printf("Yes");
		else
		printf("No");
	}
	
}
