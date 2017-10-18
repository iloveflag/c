#include <stdio.h>
int main()
{
	int BJT;
	printf("shuru");
	scanf("%d",&BJT);
	int UTC;

	if( BJT>0 && BJT<2359 &&BJT%100<60)
	{  	
	    if(BJT>800)
		{	
		UTC=BJT-800 ;
		}
		else
		{
		UTC=BJT+1600;
		}
	printf("UTC的时间为%d",UTC); 
	} 
	else
	{ 
	printf("输入格式错误！重新输入！"); 
	} 
	return 0; 
	

	
}
