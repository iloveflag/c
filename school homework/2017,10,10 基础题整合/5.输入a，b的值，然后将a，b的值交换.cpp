#include <stdio.h>
int main(){
	int a,b,t;
	printf("请输入一个整数。\na=");
	scanf("%d",&a);
	printf("请输入一个整数。\nb=");
	scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	printf("a,b互换后为a=%d,b=%d",a,b);
	
	
}
/*输入a，b的值，然后将a，b的值交换，<即如果输入时a=2，b=3，则执行完后变成a=3，b-2；>*/ 
