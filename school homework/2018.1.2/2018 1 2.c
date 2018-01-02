
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



#include "stdlib.h"
struct   data
{
      int d;
      struct   data  * next;    
 };
struct data * creat(int n){
	struct data *q,*p,*head;
	int i;
	p=(struct  data  *)malloc(sizeof(struct   data));
	head=q=p;
	for(i=0;i<n;i++)
	{
	p=(struct   data  *)malloc(sizeof(struct   data));
	scanf("%d",&p->d);
	q->next=p;
	p->next=NULL;
	q=p;
	return(head);
	}
}

main(){
	struct data *q,*p,*head;
	int x=3;
creat(x);
p=head->next;
while(p!=NULL)
{
	printf("%d ",p->d);
	p=p->next;
}

}


