#include <stdio.h>
main()
{
	char a;
	scanf("%c",&a);
	if(a>=97&&a<=122)
	{
		printf("这是小写字母");
	}
	else if(a>=65&&a<=90)
		{
			printf("这是大写字母"); 
		}
	else
	printf("这是其他字符"); 
	
}

