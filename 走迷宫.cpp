#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define random(x) (rand()%x)
main(){
	int startx,starty;
	char operater[100];
	char compare[]="stop";
	char compare1[]="up";
	char compare2[]="down";
	char compare3[]="left";
	char compare4[]="right";

	

	int i,j;
	int a[10][10];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<10;i++){
		a[random(10)][random(10)]=1;
	}
	a[0][0]=2;
	a[9][9]=0;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	printf("you can't accoss 1 and you position is 2,you item is the right bottom\n"); 
//	printf("please input where would you like start:");
//	scanf("%d %d",&startx,&starty);
	startx=starty=0;
	printf("please input stop,up,down,left,right:");
	scanf("%s",operater);
	while(strcmp(operater,compare)){
	//		printf("%s",operater);	
		if(!strcmp(operater,compare1)){
			if(a[startx-1][starty]==1){
				printf("you failed!");
				break;
			}
			a[startx][starty]=0;
			a[startx-1][starty]=2;
			startx=startx-1;
			if(startx==9&&starty==9){
				printf("you win!");
				break;
			}
		}else if(!strcmp(operater,compare2)){
			if(a[startx+1][starty]==1){
				printf("you failed!");
				break;
			}
			a[startx][starty]=0;
			a[startx+1][starty]=2;
			startx=startx+1;
			if(startx==9&&starty==9){
				printf("you win!");
				break;
			}
		}else if(!strcmp(operater,compare3)){
			if(a[startx][starty-1]==1){
				printf("you failed!");
				break;
			}
			a[startx][starty]=0;
			a[startx][starty-1]=2;
			starty=starty-1;
			if(startx==9&&starty==9){
				printf("you win!");
				break;
			}
		}else if(!strcmp(operater,compare4)){
			if(a[startx][starty+1]==1){
				printf("you failed!");
				break;
			}
			a[startx][starty]=0;
			a[startx][starty+1]=2;
			starty=starty+1;
			if(startx==9&&starty==9){
				printf("you win!");
				break;
			}
		}else{
			printf("input error,please input stop,up,down,left,right:\n");
		}
		for(i=0;i<10;i++){
			for(j=0;j<10;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("please input stop,up,down,left,right:");
		scanf("%s",operater);
	}
}
