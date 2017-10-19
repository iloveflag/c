#include <stdio.h>
main()
{
int a,b,c,t1,t2,t3;
scanf("%d %d %d",&a,&b,&c);
t1=a;
t2=b;
t3=c;
if(t1<b)
{
	t1=b;
	t2=a;
}
if(t1<c)
{
	t1=c;
	t2=a;
	t3=b;


}
printf("%d %d %d",t1,t2,t3);

}
