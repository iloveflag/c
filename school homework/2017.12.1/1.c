/*main(){
char a[5],i;
for(i=0;i<5;i++)
a[i]=getchar();
for(i=0;i<5;i++)
putchar(a[i]);
}*/
/*main(){
	char a[5];
	gets(a);
	puts(a);
  
}*/
/*#include <stdio.h>
#include <string.h>
main(){
 char a[100],b[100],c[100],d[100];
		gets(a);
		gets(b);
		gets(c);
		if(strcmp(a,b)>0)
		{
			strcpy(d,a);
			strcpy(a,b);
			strcpy(b,d);
		}
		if(strcmp(a,c)>0)
		{
			strcpy(d,a);
			strcpy(a,c);
			strcpy(c,d);
		}
		if(strcmp(b,c)>0)
		{
			strcpy(d,b);
			strcpy(b,c);
			strcpy(c,d);
		}
		puts(a);
		puts(b);
		puts(c);
			


}*/



/*#include <stdio.h>
#include <string.h>
main(){
	char a[4][100];
	int i;
	for(i=0;i<3;i++)
		gets(a[i]);
	if(strcmp(a[0],a[1])>0)
		{
			strcpy(a[3],a[0]);
			strcpy(a[0],a[1]);
			strcpy(a[1],a[3]);
		}
	if(strcmp(a[1],a[2])>0)
		{
			strcpy(a[3],a[1]);
			strcpy(a[1],a[2]);
			strcpy(a[2],a[3]);
		}
	if(strcmp(a[0],a[2])>0)
		{
			strcpy(a[3],a[0]);
			strcpy(a[0],a[2]);
			strcpy(a[2],a[3]);
		}
		puts(a[0]);
		puts(a[1]);
		puts(a[2]);
			


}*/

/*#include <stdio.h>
#include <string.h>
main(){
	char a[4][100],b[100];
	int i,j;
	for(i=0;i<4;i++)
	gets(a[i]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3-i;j++)
		{ 
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
			}
		
		}
	
	}
	for(i=0;i<4;i++)
		puts(a[i]);


}*/



