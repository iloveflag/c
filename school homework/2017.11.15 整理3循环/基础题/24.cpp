#include <stdio.h>
main(){
	int x,y,z;
	for(x=0;x<=8;x++)
	{
		for(y=0;y<=8;y++)
		{
			for(z=1;z<=8;z++)
			{
				if(x+y+z==8)
				printf("%d %d %d\n",x,y,z);
			}
		}
	}

}
