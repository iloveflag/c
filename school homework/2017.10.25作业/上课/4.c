/*main()
{
	char a;
	scanf("%c",&a);
	if(a>=95 && a<=122)
		printf("Сд");
	else if(a>=65 && a<=90)
		printf("��д");
		else if(a>=48 && a<=57)
			printf("����");
			else
				printf("�����ַ�");
}*/

/*main()
{
	int x,t;
	scanf("%d",&x);
	t=x/10;
	if(x==100) t=9;
	switch(t)
	{
	case 9:printf("a");break;
	case 8:printf("b");break;
	case 7:printf("c");break;
	case 6:printf("d");break;
	case 5:printf("e");break;
	case 4:printf("f");break;
	case 3:printf("g");break;
	case 2:printf("h");break;
	case 1:printf("i");break;
	case 0:printf("j");break;
	default:printf("��������");
	
	}
}*/
/*main()
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



}*/
/*main()
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

/*main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
		printf("ͬʱ��3,5����");
	if(a%3==0 && a%5!=0)
		printf("ֻ�ܱ�3����");
	if(a%3!=0 && a%5==0)
		printf("ֻ�ܱ�5����");
	if(a%3!=0 && a%5!=0)
		printf("���ܱ�3,5����");




}*/


/*#include <stdio.h>
#include <math.h>
main()
{
float a,b,c;
scanf("%f %f %f",&a,&b,&c);
if(a+b>c && a+c>b && b+c>a)
{
	if(a==b,b==c)
	printf("�ȱ�������");
	else if(pow(a,2)==pow(b,2)+pow(c,2)||pow(b,2)==pow(a,2)+pow(c,2)||pow(c,2)==pow(a,2)+pow(b,2))
		printf("ֱ��������");
	else
		printf("һ��������");

}
else
printf("�޷�����������");

}*/

main()
{
	int a,t;
	scanf("%d",&a);
	t=a%12;
	switch(t)
	{
	case 0:printf("��");break;
	case 1:printf("��");break;
	case 2:printf("ţ");break;
	case 3:printf("��");break;
	case 4:printf("��");break;
	case 5:printf("��");break;
	case 6:printf("��");break;
	case 7:printf("��");break;
	case 8:printf("��");break;
	case 9:printf("��");break;
	case 10:printf("��");break;
	case 11:printf("��");break;
	

	
	}




}
