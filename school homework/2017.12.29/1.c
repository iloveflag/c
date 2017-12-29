/*struct day{
int y,m,d;
};
struct stu{
int xh;
char xm[10];
struct day csny;
}
main(){
struct stu st;
scanf("%d %s %d %d %d",&st.xh,st.xm,&st.csny.y,&st.csny.m,&st.csny.d);
printf("%d %s %d %d %d",st.xh,st.xm,st.csny.y,st.csny.m,st.csny.d);
}*/
/*struct day{
int y,m,d;
};
struct stu{
int xh;
char xm[10];
struct day csny;
}
main(){
struct stu st[2];
int i;
for(i=0;i<2;i++)
scanf("%d %s %d %d %d",&st[i].xh,st[i].xm,&st[i].csny.y,&st[i].csny.m,&st[i].csny.d);
for(i=0;i<2;i++)
printf("%d %s %d %d %d\n",st[i].xh,st[i].xm,st[i].csny.y,st[i].csny.m,st[i].csny.d);
}*/


/*struct str{
int xh;
char  xm[10];
}
main(){
struct str *p,st;
p=&st;
scanf("%d",&p->xh);
printf("%d",p->xh);
}*/

/*struct str{
int y;
}
main(){
struct str *p,st[2];
for(p=st;p<st+2;p++)
scanf("%d",&p->y)
for(p=st;p<st+2;p++)
printf("%d\n",p->y);
}*/

/*#include <stdlib.h>
struct node{
int data;
struct node *next;
}
main(){
struct node a,b,c,*p;
int i;
scanf("%d %d %d",&a.data,&b.data,&c.data);
a.next=&b;
b.next=&c;
c.next=NULL;
p=&a;
for(i=0;i<3;i++)
{
printf("%d ",p->data);
p=p->next;
}
}*/


#include <stdlib.h>
struct node{
int data;
struct node *next;
}
main(){
	int *p1,int *p2;
	p1=(struct node *)

}



#include "stdlib.h"
struct   data
{
      int d;
      struct   data  * next;    
 };

main()
{int i;
struct  data  a1,a2,*p,*p1,*head;
p1=(struct  data  *)malloc(sizeof(struct   data));
p1->next=NULL;
head=p1;
for(i=0;i<3;i++)
{
p=(struct   data  *)malloc(sizeof(struct   data));
scanf("%d",&p->d );
p->next=NULL;
p1->next=p;
p1=p;
}
p=head->next;
while(p!=NULL)
{
	printf("%5d",p->d);
	p=p->next;
}

}

