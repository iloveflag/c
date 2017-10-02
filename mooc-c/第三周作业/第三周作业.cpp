#include <stdio.h>

int main (){

int c=0;

int j=0;

int o=0;

int number;

scanf("%d",&number);

if (number>-2 &&number<100000){

while(number!=-1&& number>-2 &&number<100000 ){

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
