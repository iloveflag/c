/*1.main(){
int a,b,c,d,*p1,*p2,*p3,*p4;
p1=&a,p2=&b,p3=&c,p4=&d;
scanf("%d %d %d",p1,p2,p3);
if(*p1>*p2)
{
p4=p1;
p1=p2;
p2=p4;
}
if(*p1>*p3)
{
p4=p1;
p1=p3;
p3=p4;
}
if(*p2>*p3)
{
p4=p2;
p2=p3;
p3=p4;
}
printf("%d %d %d",*p1,*p2,*p3);
}*/

/*2.1main(){
int a[10],*p;
for(p=a;p<a+10;p++)
scanf("%d",p);
for(p=a;p<a+10;p++)
printf("%d ",*p);
}*/

/*2.2main(){
	int a[10],*p,i;
	for(i=0,p=a;i<10;i++,p++)
	scanf("%d",p);
	for(i=0,p=a;i<10;i++,p++)
	printf("%d ",*p);
}
*/
/*2.3main(){
int a[10],*p,i;
p=a;
for(i=0;i<10;i++)
scanf("%d",p+i);
for(i=0;i<10;i++)
printf("%d",*(p+i));
}*/
/*2.4main(){
int a[10],*p,i;
p=a;
for(i=0;i<10;i++)
scanf("%d",a+i);
for(i=0;i<10;i++)
printf("%d",*(a+i));
}
*/
/*3.main(){
int a[10],*p;
for(p=a;p<a+10;p++)
scanf("%d",p);
for(p=&a[9];p>=a;p--)
printf("%d ",*p);
}*/

/*4.main(){
int a[10],*p,sum=0;
for(p=a;p<a+10;p++)
scanf("%d",p);
for(p=a;p<a+10;p++)
sum+=*p;
printf("%d",sum);


}*/

/*5.main(){
int a[10],*p,m;
for(p=a;p<a+10;p++)
scanf("%d",p);
m=a[0];
for(p=a;p<a+10;p++)
if(*p>m)
m=*p;
printf("%d",m);
}*/


/*6.main(){
int a[10],*p1,*p2,t;
for(p1=a;p1<a+10;p1++)
scanf("%d",p1);
for(p1=a,p2=a+9;p1<a+5;p1++,p2--)
{
	t=*p1;
	*p1=*p2;
	*p2=t;

}
for(p1=a;p1<a+10;p1++)
printf("%d ",*p1);

}*/

/*7.main(){
int a[10],*p,i,j,t;
for(p=a;p<a+10;p++)
scanf("%d",p);
for(i=0;i<9;i++)
for(p=a;p<a+9-i;p++)
if(*p>*(p+1))
{
	t=*p;
	*p=*(p+1);
	*(p+1)=t;
}
for(p=a;p<a+10;p++)
printf("%d",*p);

}*/

/*8.main(){
int a[11],*p1,*p2,i,j,t,x;
for(p1=a;p1<a+10;p1++)
scanf("%d",p1);
for(i=0;i<9;i++)
for(p1=a;p1<a+9-i;p1++)
if(*p1>*(p1+1))
{
	t=*p1;
	*p1=*(p1+1);
	*(p1+1)=t;
}
scanf("%d",&x);
for(p1=a;p1<a+10;p1++)
if(x<*p1)
break;
for(p2=a+10;p2>p1;p2--)
*p2=*(p2-1);
*p1=x;
for(p1=a;p1<a+11;p1++)
printf("%d ",*p1);

}*/

/*9.main(){
int a[10],*p,*p1,*p2,x,i,cnt=0,m,t;
for(p=a;p<a+10;p++)
scanf("%d",p);
printf("删除");
scanf("%d",&x);
for(i=0;i<10-cnt;i++)//有循环缺陷（bug）
{m=0;
	p=p1=a;
	while(*p1!=x&&p1<a+10-cnt)
	p1++;
	p2=p1;
	while(*p2==x&&p1<a+10-cnt)
	{
	p2++;
	m++;
	}
		//printf("%d %d\n",*p1,*p2);//调试 
	for(p=p1;p2<a+10-cnt;p1++,p2++)
	*p1=*p2;
	cnt=cnt+m;
		//for(p=a;p<a+10-cnt;p++)//调试 
		//printf("%d ",*p);//调试 
		//printf("cnt=%d m=%d\n",cnt,m);//调试 
	
}
for(p=a;p<a+10-cnt;p++)
printf("%d ",*p);
}*/



/*10.int sum(int *p){
	int i,s=0;
for(i=0;i<10;i++,p++)
s+=*p;
return(s);
}


main(){
int a[10],*p,s;
for(p=a;p<a+10;p++)
scanf("%d",p);
p=a;
s=sum(p);
printf("%d",s);

}*/

/*11.int max(int *p){
int m,i;
m=*p;
for(i=0;i<10;i++,p++)
if(*p>m)
m=*p;
return(m);
}
main(){
int a[10],*p,m;
for(p=a;p<a+10;p++)
scanf("%d",p);
p=a;
m=max(p);
printf("%d",m);

}*/



/*12.void px(int *p){
int i,j,t;
for(i=0;i<9;i++)
for(j=0;j<9-i;j++,p++)
{if(*p>*(p+1))
{
 t=*p;
 *p=*(p+1);
 *(p+1)=t;
}
p=p-10;
}
}
main(){
int a[10],*p;
for(p=a;p<a+10;p++)
scanf("%d",p);
p=a;
px(p);
for(p=a;p<a+10;p++)
printf("%d ",*p);

}*/

/*13.void px(int *p){
int *p1,i,t;
for(i=0;i<9;i++)
for(p1=p;p1<p+9-i;p1++)
if(*p1>*(p1+1))
{
t=*p1;
*p1=*(p1+1);
*(p1+1)=t;
}
}
void cr(int *p,int x){
int *p1,*p2;
for(p1=p;p1<p+10;p1++)
if(x<*p1)
break;
for(p2=p+10;p2>p1;p2--)
*p2=*(p2-1);
*p1=x;
}

main(){
	int a[11],*p,x;
	for(p=a;p<a+10;p++)
		scanf("%d",p);
	p=a;
	px(p);
	printf("插入");
	scanf("%d",&x);
	cr(p,x);
	for(p=a;p<a+11;p++)
		printf("%d ",*p);

}*/
