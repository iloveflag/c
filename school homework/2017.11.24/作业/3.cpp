#include <stdio.h>
#include <string.h>
main(){
	char a[100];
	char b[100];
	int n,m;
	int i,j,t,k;
	scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(a[j]>a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		
		}
	}
	
	for(i=0;i<m-1;i++)
	{
		for(j=0;j<m-1;j++)
		{
		if(b[j]>b[j+1])
			{
			t=b[j];
			b[j]=b[j+1];
			b[j+1]=t;
			}
		
		}
	} 
	printf("排序后的a=%s\n",a);//排序后的a 
	printf("排序后的 b=%s\n",b);  //排序后的 b       
	for(j=0;j<m;j++)      
	{
		for(i=0;i<n+j;i++)
		{
			if(b[j]<a[i])
				break;
		}
		for(k=n-1+j;k>=i;k--)
		a[k+1]=a[k];
		a[i]=b[j];
	
	}

	a[n+m]=0;               
	printf("%s",a);
}
	
	
	

