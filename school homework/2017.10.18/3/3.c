/*main()
{
int a,b;
scanf("%d %d",a,b);
 
if(a>b)
{
	printf("%d",a);
}
if(a<b)
{
	printf("%d",b);

}
}*/


/*main()
{
 int a,b,t;
 scanf("%d,%d",&a,&b);
 t=a;
 if (a<b){
 t=b;
 }
 printf("%d",t);
}*/


/*main()
{
 int a,b,t;
 scanf("%d %d",&a,&b);
 if (a>b)
 {
 t=a;
 a=b;
 b=t;
 }
 printf("%d",a);
}*/


/*main()
{
int a,b,c,t;
scanf("%d %d %d",&a,&b,&c);
t=a;
if(a<b)
{
	t=b;
}
if(t<c)
{
	t=c;
}
printf("%d",t);
}*/



/*main()
{
int a,b,c,t;
scanf("%d %d %d",&a,&b,&c);

if(a<b)
{
	t=a;
	a=b;
	b=t;
}
if(a<c)
{
	t=c;
	a=c;
	c=t;

}
printf("%d",a);


}*/
main()
{
int a,b,c,t1,t2,t3;
scanf("%d %d %d",&a,&b,&c);
t1=a;
t2=b;
t3=c;
if(a<b)
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