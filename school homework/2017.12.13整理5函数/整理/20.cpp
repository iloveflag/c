#include <math.h>
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

}
