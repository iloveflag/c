#include <stdio.h>

int main()

{

int n,m;

scanf("%d %d",&n,&m);

if ( n>0&&n<m&&m<200){

  int t1,t2;

int x;

int cnt=0;

x=2;

int t=0;

while(cnt<m){

int i;

int isprime =1;

for(i=2;i<x;i++){

if(x%i==0){

isprime=0;

break;

}

}

if(isprime==1){

cnt++;

t+=x;

}

if (cnt==n-1){

t1=t;

   } 

if (cnt==m){

t2=t;

} 

x++;

}

printf("%d",t2-t1);

} 

} 
