/*#include <stdio.h>
main(){
char a[100];
int n,i,j,t;
scanf("%s",a);
for(n=0;a[n];n++)
for(j=0;j<n-1;j++)
{
	for(i=0;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		
		
		}
	}
}
printf("%s",a);
}*/


/*#include <stdio.h>
main(){
	char a[100];
	char b[100];
	int m,n,t,i,k;
	scanf("%s",a);
	scanf("%s",b);
	for(m=0;a[m];m++)
	for(n=0;b[n];n++)
	t=m>n?n:m;
	i=0;
	while(i<t)
	{
		if(a[i]>b[i]){k=1;break;}
		if(a[i]<b[i]){k=-1;break;}
		i++;
	}
	if(i==t)
	{
		if(m>n)k=1;
		if(m<n)k=-1;
		if(m==n)k=0;
	}
	if(k==1)
		printf("%s",a);
	if(k==-1)
		printf("%s",b);
	if(k==0)
		printf("Ò»Ñù´ó");
	printf("%d",k);
}*/

/*#include <stdio.h>
main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int x,y,z,t,sum=0,i;
	scanf("%d %d %d",&x,&y,&z);
	t=0;
	if(x%400==0||x%4==0&&x%100!=0)
		a[2]=a[2]+1;
	for(i=1;i<y;i++)
		sum+=a[i];
	sum+=z;
	printf("%d",sum);


}*/
/*#include <stdio.h>
#include <string.h>
main(){
	char a[100]="china today";
	int s;
	s=strlen(a);
	char b[100];
	int  in,l,i,j;
	scanf("%d %d",&in,&l);
	if(in+l<s)
	{
		for(i=in-1,j=0;j<l;i++,j++)
		b[j]=a[i];
		b[j]=0;
	}
	
	printf("%s",b);
}*/



#include <stdio.h>
main(){
	char a[100];
	char b[100];
	int n,m;
	int i,j,t;
	scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n;j++)
		{
		if(a[j]>a[j+1])
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		
		}
	}
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m;j++)
		{
		if(a[j]>a[j+1])
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		
		}
	}
	strcat(a,b);

	for(i=0;i<n;i++)
	{
		if(x<a[j])
			br
	
	}
	
	






}