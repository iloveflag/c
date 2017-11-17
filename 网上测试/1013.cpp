#include <stdio.h>
main()
{
	int x;
	scanf("%d",&x);
	if(x>=86)
	printf("VERY GOOD");
	if(x>=60 && x<=85)
	printf("GOOD");
	if(x<60)
	printf("BAD"); 
}
