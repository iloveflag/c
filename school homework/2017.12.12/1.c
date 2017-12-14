
/*void jiaohuan(int x,int y){
int t;
t=x;
x=y;
y=t;
}

mian(){

int a,b;
a=3,b=4;
jiaohuan(a,b);

}
main(){
	int a[2]={3,4};
	jiaohuan(a[0],a[1]);
	printf("%d %d",a[0],a[1]);

}
*/


/*void ertr( int b[]){
int t;
t=b[0];
b[0]=b[1];
b[1]=t;

}
main(){
	int a[2]={3,4};
	ertr(a);
	printf("%d %d",a[0],a[1]);
}*/
/*float js(int b[],int n){
int i;
float avy,s=0;
for(i=0;i<n;i++)
s+=b[i];
avy=s/5.0;
return(avy);
}

main(){
float a[5];
float avy;
int i;
for(i=0;i<5;i++)
scanf("%d",&a[i]);
avy=js(a,5);
printf("%f",avy);

}*/
/*void px(int b[],int n){
	int i,j,t;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
		{
			if(b[j]>b[j+1])
			{
			t=b[j];
			b[j]=b[j+1];
			b[j+1]=t;
			}			
		}
}

main(){
int a[10],i;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
px(a,10);
for(i=0;i<10;i++)
printf("%d\n",a[i]);

}*/

//--------------------------------------
/*int max(int b[],int n){
int i,t;
t=b[0];
for(i=0;i<n;i++)
if(b[i]>t)
t=b[i];
return(t);
}
main(){
	int a[10],i,m;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	m=max(a,10);
	printf("%d",m);
}*/

/*void dz(int b[]){
int i,t;
for(i=0;i<5;i++)
{
t=b[i];
b[i]=b[9-i];
b[9-i]=t;
}
}
main(){
int a[10],i;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
dz(a);
for(i=0;i<10;i++)
printf("%d\n",a[i]);
}
*/


/*void px(int b[],int k){
	int i,j,t;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
		{	if(k==0)
			{
				if(b[j]>b[j+1])
				{
					t=b[j];
					b[j]=b[j+1];
					b[j+1]=t;
				}
			}
			else
			{
				if(b[j]<b[j+1])
				{
					t=b[j];
					b[j]=b[j+1];
					b[j+1]=t;
				}

			}
		}
}

main(){
int a[10],i,k;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("ÊäÈëk\n");
scanf("%d",&k);
px(a,k);
for(i=0;i<10;i++)
printf("%d\n",a[i]);

}*/

/*void px(int b[]){
	int i,j,t;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(b[j+1]<b[j])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
}
void cr(int b[],int x){
int i,j;
for(i=0;i<10;i++)
if(x<b[i])
break;
for(j=10;j>i;j--)
b[j]=b[j-1];
b[i]=x;

}
main(){
int a[11],i,x;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
px(a);
for(i=0;i<10;i++)
printf("%d",a[i]);
printf("ÊäÈë");
scanf("%d",&x);
cr(a,x);
for(i=0;i<11;i++)
printf("%d",a[i]);
}*/


/*#include <math.h>
float js(int b[],int n){
int i;
float avy,s=0;
for(i=0;i<n;i++)
s+=b[i];
avy=s/10.0;
return(avy);
}
int zx(int b[],int avy){
int i,min;
min=b[0];
for(i=0;i<10;i++)
if(fabs(b[i]-avy)<fabs(min-avy))
min=b[i];
return(min);


}
main(){
float a[10];
float avy;
int i,min;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
avy=js(a,10);
min=zx(a,avy);
printf("%d",min);

}*/




























