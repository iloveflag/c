//输入一个三位数，将这个三位数按反序输出
//输入：一个三位整数
//输出：一个三位整数
#include <stdio.h>
main(){
	int x,a,b,c;
	scanf("%d",&x);
	
	 c=x%10;
	
	 a=x/100;
	
	 b=x-a*100-c;
	
	printf("%d",a+b+c*100);  
} 
