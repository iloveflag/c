
/*#include "stdlib.h"
struct   data
{
      int d;
      struct   data  * next;    
 }


main(){
struct data *q,*p,*head;
int i;
p=(struct   data  *)malloc(sizeof(struct   data));
head=q=p;
for(i=0;i<3;i++)
{
p=(struct   data  *)malloc(sizeof(struct   data));
scanf("%d",&p->d);
q->next=p;
p->next=NULL;
q=p;
}
p=head->next;
while(p!=NULL)
{
	printf("%d ",p->d);
	p=p->next;
}

}*/


/*#include <stdlib.h>
struct data{
int d;
struct data * next;
};

struct data * creat(int n){
struct data *p,*q,*head;
int i;
p=(struct   data  *)malloc(sizeof(struct   data));
head=q=p;
for(i=0;i<n;i++)
{
	p=(struct   data  *)malloc(sizeof(struct   data));
	scanf("%d",&p->d);
	q->next=p;
	p->next=NULL;
	q=p;
}
return head;
}

struct data * print(struct data * head){
struct data *p;
p=head->next;
while(p!=NULL)
{
printf("%d ",p->d);
p=p->next;
}
}
main(){
	struct data * head;
	head=creat(3);
	print(head);
}*/


/*删除#include <stdlib.h>
struct data{
int d;
struct data * next;
};

struct data * creat(int n){
struct data *p,*q,*head;
int i;
p=(struct   data  *)malloc(sizeof(struct   data));
head=q=p;
for(i=0;i<n;i++)
{
	p=(struct   data  *)malloc(sizeof(struct   data));
	scanf("%d",&p->d);
	q->next=p;
	p->next=NULL;
	q=p;
}
return head;
}

struct data * print(struct data * head){
struct data *p;
p=head->next;
while(p!=NULL)
{
printf("%d ",p->d);
p=p->next;
}
};

struct data * shanchu(int x,struct data * head){
struct data *p,*q;
int i;
p=q=head;
for(i=0;i<3;i++)
{	
	if(p->d==x)
	break;
	else
	q=p;
	p=p->next;
	
}
q->next=p->next;
return head;
}

main(){
	struct data * head,*head1;
	int x;
	head=creat(3);
	scanf("%d",&x);
	head1=shanchu(x,head);
	print(head1);
}*/

/*插入#include <stdlib.h>
struct data{
int d;
struct data * next;
};

struct data * creat(int n){
struct data *p,*q,*head;
int i;
p=(struct   data  *)malloc(sizeof(struct   data));
head=q=p;
for(i=0;i<n;i++)
{
	p=(struct   data  *)malloc(sizeof(struct   data));
	scanf("%d",&p->d);
	q->next=p;
	p->next=NULL;
	q=p;
}
return head;
}

struct data * print(struct data * head){
struct data *p;
p=head->next;
while(p!=NULL)
{
printf("%d ",p->d);
p=p->next;
}
};

struct data * charu(int x,struct data * head){
struct data *p,*q,*n;
int i;
n=(struct   data  *)malloc(sizeof(struct   data));
n->d=x;
p=q=head;
for(i=0;i<3;i++)
{
	if(x<p->d)
		break;
	else
		q=p;
		p=p->next;

}
q->next=n;
n->next=p;
return head;
}

main(){
	struct data * head;
	int x;
	head=creat(3);
	scanf("%d",&x);
	charu(x,head);
	print(head);
}*/

#include <stdlib.h>
struct data{
int d;
struct data * next;
};

struct data * creat(int n){
struct data *p,*q,*head;
int i;
p=(struct   data  *)malloc(sizeof(struct   data));
head=q=p;
for(i=0;i<n;i++)
{
	p=(struct   data  *)malloc(sizeof(struct   data));
	printf("CREAT\n");
	scanf("%d",&p->d);
	q->next=p;
	p->next=NULL;
	q=p;
}
return head;
}

struct data * print(struct data * head){
struct data *p;
p=head->next;
while(p!=NULL)
{
printf("%d ",p->d);
p=p->next;
}
};

struct data * shanchu(int x,struct data * head){
struct data *p,*q;
int i;
p=q=head;
for(i=0;i<3;i++)
{	
	if(p->d==x)
	break;
	else
	q=p;
	p=p->next;
	
}
q->next=p->next;
return head;
}

struct data * charu(int x,struct data * head){
struct data *p,*q,*n;
int i;
n=(struct   data  *)malloc(sizeof(struct   data));
n->d=x;
p=q=head;
for(i=0;i<3;i++)
{
	if(x<p->d)
		break;
	else
		q=p;
		p=p->next;

}
q->next=n;
n->next=p;
return head;
}

main(){
	struct data * head;
	int x,i;
	char y,n;
	while(y!='E')
	{
		printf("A---------输入数据\nB---------删除数据\nC---------插入数据\nD---------显示数据\nE---------退出\n");
		scanf("%c",&y);
		if(y=='A')
		{
		head=creat(3);
		}
		if(y=='B')
		{
		scanf("%d",&x);
		shanchu(x,head);
		}
		if(y=='C')
		{
		scanf("%d",&x);
		charu(x,head);
		}
		if(y=='D')
		print(head);
		scanf("%c",&n);//除去空格键
		printf("\n");
	}
}

