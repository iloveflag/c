				/*1、输入成绩输出相应的等级。其中
				学生成绩95分以上，输出‘A’
                 85-94，输出‘B’
                 75-84，输出‘C’
                 65-74，输出‘D’
                 65以下，输出‘E’
				 */
#include <stdio.h>
main()
{
    int a;
    scanf("%d",&a);
    if(a>=95)
    {
		printf("A");
	}
	else if(a>=85)
		{
			printf("B");	
		}
		else if(a>=75)
			{
				printf("C")	;
			}
			else if(a>=65)
				{
					printf("D");
				}
	else
	printf("E");
	



}

