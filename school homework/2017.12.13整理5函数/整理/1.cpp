#include <stdio.h>
void sc(char b[]){
	int i;
	for(i=0;i<10;i++)
	b[i]='*';
}

main(){
	char a[10],i;
	sc(a);
	for(i=0;i<10;i++)
	printf("%c\n",a[i]);
	
}
