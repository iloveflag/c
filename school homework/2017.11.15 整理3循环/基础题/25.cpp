#include <stdio.h>
main(){
	int x,y,z;
	for(x=0;x<=10;x++)
	{
		for(y=0;y<=5;y++)
		{
			for(z=0;z<=2;z++)
			{
				if(x+2*y+5*z==10)
				printf("%d %d %d\n",x,y,z);
			}
		}
	}
}
