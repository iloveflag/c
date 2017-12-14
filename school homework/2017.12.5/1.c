/*main(){
int x,y,i,t;
scanf("%d %d",&x,&y);
t=x;
for(i=2;i<=y;i++)
x=x*t;
printf("%d",x);
}*/


/*#include <stdio.h>
main(){
	int x,y,s;
	scanf("%d %d",&x,&y);
	s=pow1(x,y);
	printf("%d",s);
}
int pow1(int a,int b)
{
	int t=1,i;
	for(i=1;i<=b;i++)
		t=t*a;
	return(t);

}*/

/*main(){
int x,y,t;
scanf("%d %d",&x,&y);
t=you(x,y);
printf("%d",t);


}
int you(int x,int y){
	int i,m;
	m=x<y?x:y;
	for(i=m;i<1000;i++)
	{
		if(i%x==0&&i%y==0)
		{
			return(i);
			break;
		}
	}
	


}*/





/*main(){
int x,s;
scanf("%d",&x);
s=jc(x);
printf("%d",s);

}
int jc(int x){
int i,s=1;
for(i=1;i<=x;i++)
s=s*i;
return(s);

}*/


main(){
int x,t;
scanf("%d",&x);
t=sushu(x);
if(t==1)
printf("yes");
if(t==-1)
printf("no");
}

int sushu(int x)
{
int i,t;
for(i=2;i<x;i++)
	if(x%i==0)
	break;

if(i==x)
t=1;
else
t=-1;
return(t);

}












