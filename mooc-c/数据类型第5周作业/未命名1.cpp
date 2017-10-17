#include <stdio.h>
int main(){
	int a=16,b=19;
	//scanf("%d/%d",&a,&b);
	if(10<=a&&a<b&&b<100){
		printf("0.") ;
		int cnt=0;
		a=a*10;
			
				for(;cnt<201;cnt++){
					if(a%b!=0){
					printf("%d",a/b);
					a=a/b*10;
					}
				}	
	}
}
	


