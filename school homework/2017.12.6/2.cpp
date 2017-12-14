#include <stdio.h>
float js(float h,int n);
main(){
	int n;
	float h;
	float s;
	scanf("%f %d",&h,&n);
	s=js(h,n);
	printf("%f",s);
}
float js(float h,int n){
	float s;
	if(n==1)
	s=h/2.0;
	else
	s=js(h/2.0,n-1);
	return(s);
}
