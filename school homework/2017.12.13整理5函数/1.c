/*#include <string.h>
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
	


}*/



/*#include <string.h>
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
void sc(char b[],int x){
int i,j,cnt;
cnt=strlen(b);
for(i=0;i<cnt;i++)
 if(x==b[i])
	 break;
for(j=i;j<cnt;j++)
 b[j]=b[j+1];


}

main(){
	char a[100],x,m;
	int i;
	scanf("%s%c",a,&m);
	px(a);
	printf("%s\n",a);
	printf("…æ≥˝");
	scanf("%c",&x);
	sc(a,x);
	printf("%s",a);
	


}*/
void qc(char a[],char b[],int t,int l){
	int i,j=0;
for(i=t;i<t+l;i++,j++)
b[j]=a[i];
b[j+1]='/0';

}

main(){
	char a[100]="china today",b[10];
	int t,l;
	scanf("%d %d",&t,&l);
	qc(a,b,t,l);
	printf("%s",b);


}






