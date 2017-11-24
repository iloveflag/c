#include <stdio.h>
main(){
	char c[10];
	 int i,cnt=0;
	scanf("%s",c);
	for(i=0;i<10;i++)
	{
		if(c[i]!='\0')
		cnt++;
		
	}
	printf("%d",cnt);
	
	
}
