#include <string.h>
void px(char b[]){
	int i,j,t,cnt;
	cnt=strlen(b);
	for(i=0;i<cnt-1;i++)
		for(j=0;j<cnt-1-i;j++)
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			
			}
}
void cr(char b[],char x){
	int i,j,cnt;
	cnt=strlen(b);
	for(i=0;i<cnt;i++)
		if(x<b[i])
			break;
	for(j=cnt;j>i;j--)
		b[j]=b[j-1];
	b[i]=x;
	b[cnt+1]='\0';


}

main(){
	char a[100],x,m;
	int i;
	scanf("%s%c",a,&m);
	px(a);
	printf("%s\n",a);
	printf("≤Â»Î");
	scanf("%c",&x);
	cr(a,x);
	printf("%s",a);
	


}
