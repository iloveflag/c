				/*1������ɼ������Ӧ�ĵȼ�������
				ѧ���ɼ�95�����ϣ������A��
                 85-94�������B��
                 75-84�������C��
                 65-74�������D��
                 65���£������E��
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

