/*#include <stdio.h>
#include <string.h>
main(){
	char a[100];
	int i,j,k,m;
	gets(a);
	i=0;
	while(a[i]!=0)
	{
		while(!(a[i]>='0'&&a[i]<='9'))
		i++;
		k=i;
		while(a[i]>='0'&&a[i]<='9')
		i++;
		m=i;
		strcpy(&a[k],&a[m]);
		i=k+1;
		
	
	}
	puts(a);
	


}*/



#include <stdio.h>
#include <string.h>
main(){
	char a[100];
	int i,j,k=0,m=0,cnt=0;
	gets(a);
	while(a[i]!=0)
	{
	
		while(a[i]!=' ')
		i++;
		while(a[i]==' ')
		i++;
		cnt++;
	}
	printf("%d",cnt);




}



/*main(){
char c[100];
int a[26]={0},b[26]={0},i=0,t,m=97,n=65;
gets(c);

while(c[i]!='\0')
{	t=0;
	if(c[i]>='a'&&c[i]<='z')
	{
		t=c[i]-97;
		a[t]++;
	
	}
	if(c[i]>='A'&&c[i]<='Z')
	{
		t=c[i]-65;
		b[t]++;
	
	}
	i++;
}
for(i=0;i<26;i++,m++,n++)
printf("%c出现的次数%d %c出现的次数%d\n",m,a[i],n,b[i]);




}*/
/*main(){
	int a[100],b[100],c[100],i,cf=0;
	gets(a);
	gets(b);
	i=0;
	while(a[i]!=-1||b[i]!=-1)
	{
		c[i]=(b[i]+a[i]+cf)%10000;
		cf=(b[i]+a[i]+cf)/10000;
		i++;
	}
	if(a[i]!=-1)
	{
		while(a[i]!=-1)
		{
			c[i]=(a[i]+cf)%10000;
			cf=(a[i]+cf)/10000;
		
		}
	
	}
	if(b[i]!=-1)
	{
		while(b[i]!=-1)
		{
			c[i]=(b[i]+cf)%10000;
			cf=(b[i]+cf)/10000;
		
		}
	
	}



}*/









