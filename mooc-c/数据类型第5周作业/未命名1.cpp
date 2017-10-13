#include <stdio.h>
int main(){
	int a,b;
	scanf("%d/%d",&a,&b);
	if(10<=a&&a<b&&b<100){
		int cnt=0;
		a=a*10;
			for(;cnt<201;cnt++){
					printf("%d",a/b);
			a=a/b*10;
		
			
			printf("\n");
			}		
	}
}
	


