#include <stdio.h>
int main(){
	int a,b,t;
	printf("������һ��������\na=");
	scanf("%d",&a);
	printf("������һ��������\nb=");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("a,b������Ϊa=%d,b=%d",a,b);
	
	
}
/*����a��b��ֵ��Ȼ��a��b��ֵ������<���������ʱa=2��b=3����ִ�������a=3��b-2��>*/ 
