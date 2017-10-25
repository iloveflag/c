#include <stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a<=10)
	printf("2.50");
	else
	printf("%.2f",(a-10)*1.50+2.50);
}
