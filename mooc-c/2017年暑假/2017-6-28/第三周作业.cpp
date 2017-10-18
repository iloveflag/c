#include <stdio.h>
int main (){
	int c=0;
	int j=0;
	int o=0;
	int number;
	scanf("%d",&number);
	if (number>0 &&number<1000){
	
	while(number!=-1&&number>0 &&number<1000){
		if(number%2==0){
	    o++; 
		}
	    c++;
	    scanf("%d",&number);
	}
	j=c-o;
	printf("%d %d",j,o);
}
} 
