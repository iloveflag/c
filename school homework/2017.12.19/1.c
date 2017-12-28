/*main(){
int a,b,c,d,*p1,*p2,*p3,*p4;
p1=&a;
p2=&b;
p3=&c;
p4=&d;
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
}
*/



/*main(){
int a,b,c,d,*p1,*p2,*p3,*p4;
p1=&a;
p2=&b;
p3=&c;
p4=&d;
scanf("%d %d %d",p1,p2,p3);
if(*p1>*p2)
{
	*p4=*p1;
	*p1=*p2;
	*p2=*p4;
}
if(*p1>*p3)
{
	*p4=*p1;
	*p1=*p3;
	*p3=*p4;
}
if(*p2>*p3)
{
	*p4=*p2;
	*p2=*p3;
	*p3=*p4;
}
printf("%d %d %d",*p1,*p2,*p3);
}
*/

/*main(){
int a[10],i,*p1;
p1=a;
for(i=0;i<10;i++)
{
printf("%d\n",&a[i]);
printf("%d\n",p1+i);
printf("%d\n",a+i);
printf("\n");
}
}*/


/*main(){
int a[10]={0},i,*p1;
p1=a;
for(i=0;i<10;i++)
{
printf("%d\n",&a[i]);
printf("%d\n",*(p1+i));
printf("%d\n",*(a+i));
printf("\n");
}
}*/

/*main(){
	int a[10]={0,1,2,3,4,5,6,7,8,9},i,*p1;
	for(i=0,p1=a;i<10;p1++,i++)
		printf("%d\n",*p1);
}*/


main(){
	int a[10],*p1,i;
	p1=a;
	for(i=0,p1=a;i<10;p1++,i++)
	scanf("%d",p1);
	for(i=0,p1=a;i<10;p1++,i++)
	printf("%d\n",*p1);
	for(p1=&a[9];p1<a+10;p1--)
	printf("%d\n",*p1);


}





















