#include <stdio.h>
main(){
	char x,t;
	int a,b,c,d;
	a=b=c=d=0;
	scanf("%c",&x);
	scanf("%c",&t);//除去回车键
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
		scanf("%c",&t);//除去回车键 
	}
		
	printf("%d %d %d %d",a,b,c,d);
}
