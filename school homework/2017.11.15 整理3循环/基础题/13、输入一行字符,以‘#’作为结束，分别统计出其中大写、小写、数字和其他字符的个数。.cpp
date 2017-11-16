#include <stdio.h>
main(){
	char x,t;
	int a,b,c,d;
	a=b=c=d=0;
	scanf("%c",&x);
<<<<<<< HEAD
<<<<<<< HEAD
	scanf("%c",&t);//��ȥ�س��� 
=======
	scanf("%c",&t);//除去回车键
>>>>>>> 11ef5b54889a9b464aec2d7de6a64b1c9aab2f47
=======
	scanf("%c",&t);//除去回车键
>>>>>>> 11ef5b54889a9b464aec2d7de6a64b1c9aab2f47
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
<<<<<<< HEAD
<<<<<<< HEAD
		scanf("%c",&t);//��ȥ�س��� 
=======
		scanf("%c",&t);//除去回车键 
>>>>>>> 11ef5b54889a9b464aec2d7de6a64b1c9aab2f47
=======
		scanf("%c",&t);//除去回车键 
>>>>>>> 11ef5b54889a9b464aec2d7de6a64b1c9aab2f47
	}
		
	printf("%d %d %d %d",a,b,c,d);
}
