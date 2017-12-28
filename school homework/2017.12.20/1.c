/*main(){
int a[4],*p,i;
for(p=a,i=0;i<4;p++,i++)
scanf("%d",p);
for(p=a,i=0;i<4;p++,i++)
printf("%d",*p);
}
*/

/*main(){
int a[4],*p,i;
for(p=a,i=0;i<4;i++)
scanf("%d",p+i);
for(p=a,i=0;i<4;i++)
printf("%d",*(p+i));
}*/


/*main(){
int a[4],*p,i;
for(i=0;i<4;i++)
scanf("%d",a+i);
for(i=0;i<4;i++)
printf("%d",*(a+i));
}*/


/*main(){
int a[4],*p,i;
for(i=0;i<4;i++)
scanf("%d",&a[i]);
for(i=0;i<4;i++)
printf("%d",a[i]);
}*/

/*main(){
int a[10],*p1,*p2,i;
for(p1=a,i=0;i<10;p1++,i++)
scanf("%d",p1);
for(p1=a,p2=&a[1];p2<a+10;p2++)
if(*p1<*p2)
p1=p2;
printf("%d",*p1);
}*/




/*main(){
int a[10],b,*p1,*p2,i;
for(p1=a,i=0;i<10;p1++,i++)
scanf("%d",p1);
for(p1=a,p2=&a[9];p1<p2;p1++,p2--)
{
	b=*p1;
	*p1=*p2;
	*p2=b;
}
for(p1=a;p1<a+10;p1++)
printf("%d ",*p1);
}*/



/*--------------------------------------
main(){
int a[10],*p1,t,i,j;
for(p1=a;p1<a+10;p1++)
scanf("%d",p1);
for(i=0;i<9;i++)
for(p1=a;p1<a+10-i;p1++)
if(*p1>*(p1+1))
{
	t=*(p1+1);
	*(p1+1)=*p1;
	*p1=t;

}
for(p1=a;p1<a+10;p1++)
printf("%d ",*p1);
}*/


/*main(){
int a[11],x,*p1,*p2,t,i;
for(p1=a;p1<a+10;p1++)
scanf("%d",p1);
for(i=0;i<9;i++)
for(p1=a;p1<a+9-i;p1++)
if(*p1>*(p1+1))
{
	t=*(p1+1);
	*(p1+1)=*p1;
	*p1=t;

}
for(p1=a;p1<a+10;p1++)
printf("%d ",*p1);
printf("\n");
printf("shuru");
scanf("%d",&x);
for(p1=a;p1<a+10;p1++)
if(x<*p1)
break;
for(p2=&a[10];p2>p1;p2--)
*p2=*(p2-1);
*p1=x;
for(p1=a;p1<a+11;p1++)
printf("%d ",*p1);
}*/

/*main()
{
int a[10],x,*p1,*p2,*p3,t,i,j,cnt=0,m=0;
for(p1=a;p1<a+10;p1++)
scanf("%d",p1);
for(i=0;i<9;i++)
for(p1=a;p1<a+9-i;p1++)
if(*p1>*(p1+1))
{
	t=*(p1+1);
	*(p1+1)=*p1;
	*p1=t;
}
printf("delete:");
scanf("%d",&x);
for(j=0;j<10-cnt;j++)
{	p1=a;
	while(x!=*p1)
	p1++;
	while(x==*p1)
	{
	cnt++;
	p1++;
	}
	p3=p1;
	p1=p2;
	for(;p3<a+10-m;p3++)
	{
	
		*p2=*p3;
		m=cnt;
	}

}
printf("%d\n",cnt);
for(p1=a;p1<a+10;p1++)
printf("%d ",*p1);
}
==================================================================================
*/




