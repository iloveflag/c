//1.�Ӽ�����������������һ�������(�ӡ������ˡ���)�� ����������������ֱ���if else��switch�����ɣ�
#include <stdio.h>
main()
{
 int a,b;
 char c;
 scanf("%d%c%d",&a,&c,&b);
 switch(c)
 {
 case 43:printf("%d",a+b);break;
 case 45:printf("%d",a-b);break;
 case 42:printf("%d",a*b);break;
 case 47:printf("%d",a/b);break;
 default:printf("no");
 
 
 }



}
/*
#include <stdio.h>
main()
{
 int a,b;
 char c;
 scanf("%d%c%d",&a,&c,&b);
if(c==43)
	 printf("%d",a+b);
if(c==45)
	printf("%d",a-b);
if(c==42)
	printf("%d",a*b);
if(c==47)
	printf("%d",a/b);
}
*/

