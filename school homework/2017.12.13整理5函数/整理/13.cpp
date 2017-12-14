#include <stdio.h>
float ft(float h,int n){
	float t;
	if(n==1)
	t=h/2.0;
	else
	t=ft(h,n-1)/2.0;
	return(t);
	
}
main(){
	float h,t;
	int n;
	scanf("%f %d",&h,&n);
	t=ft(h,n);
	printf("%f",t);
}
