/*main(){
int a,b,*p1,*p2;
p1=&a;
p2=&b;
scanf("%d %d",p1,p2);
printf("%d %d",*p1,*p2);
}*/


/*main(){
int a,b,c,*p1,*p2,*p3;
p1=&a;
p2=&b;
p3=&c;
scanf("%d %d",p1,p2);
*p3=*p1;
*p1=*p2;
*p2=*p3;
printf("%d %d",*p1,*p2);
}*/


/*main(){
int a,b,c,*p1,*p2,*p3;
p1=&a;
p2=&b;
p3=&c;
scanf("%d %d",p1,p2);
p3=p1;
p1=p2;
p2=p3;
printf("%d %d",*p1,*p2);
}*/

main(){
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
printf("%d %d %d",a,b,c);
}