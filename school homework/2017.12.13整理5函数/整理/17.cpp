void dz(int b[]){
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
