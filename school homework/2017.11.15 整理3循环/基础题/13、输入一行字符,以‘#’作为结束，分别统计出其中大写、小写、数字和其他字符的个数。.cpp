#include <stdio.h>
main(){
	char x,t;
	int a,b,c,d;
	a=b=c=d=0;
	scanf("%c",&x);
	scanf("%c",&t);//��ȥ�س��� 
	while(x!='#')
	{
		if(x>='A'&&x<='Z')
		a++;
		else if(x>='a'&&x<='z')
		b++;
		else if(x>='0'&&x<='9')
		c++;
		else
		d++;
		scanf("%c",&x);
	S	scanf("%c",&t);//��ȥ�س��� 
	}
		
	printf("%d %d %d %d",a,b,c,d);
}
