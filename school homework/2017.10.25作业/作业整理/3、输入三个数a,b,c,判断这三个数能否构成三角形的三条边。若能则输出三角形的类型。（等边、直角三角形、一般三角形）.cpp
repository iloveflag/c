//3������������a,b,c,�ж����������ܷ񹹳������ε������ߡ���������������ε����͡����ȱߡ�ֱ�������Ρ�һ�������Σ�
#include <stdio.h>
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

}
