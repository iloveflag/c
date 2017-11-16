/*#include <stdio.h>
#include <math.h>
main(){
	float x,max,t;
for(x=1;x<=10;x++)
{
	t=x*x-5*x+sin(x);
	if(x==1)
	max=t;
	if(max<t)
		max=t;
}

printf("%",t);
}
*/



/*main()
{
int x,y,z,t,cnt=0;
for(x=1;x<=4;x++)
{
	for(y=1;y<=4;y++)
	{
		for(z=1;z<=4;z++)
		{	if(x!=y&&y!=z&&x!=z)
			{
				cnt++;
				t=100*x+y*10+z;
				printf("%d\n",t);
			}
		}

	}

}
printf("%d",cnt);
}
*/

/*main()
{
	int x;
	for(x=1;x<1000;x++)
	{
		if(x%2==1 && x%3==2 && x%5==4 && x%6==5 && x%7==0)
		{
			printf("%d\n",x);
			break;
			
		}
		
	}

}
*/
/*main()
{	int x,y,i,t;
	for(x=1;x<=9;x++)
	{
	  for(y=0;y<=9;y++)
	  {	
		 t=x*1000+x*100+y*10+y;
		 for(i=2;i<t;i++)
		 {
			 if(t==i*i)
				printf("%d",t);
		 }
	  }
	}




}*/

/*#include <math.h>
#include <stdio.h>
main()
{
	int x,x1,x2,t1,t2;
	for(x=1;x<10000;x++)
	{
		x1=x+100;
		t1=sqrt(x1);
		x2=x1+168;
		t2=sqrt(x2);
		if(t1==sqrt(x1)&&t2==sqrt(x2))
		{	
			printf("%d",x);
			
		}
			
	
	}




}*/

main()
{	int cnt=0,s;
	float h=100;
	s=h;
	for(;h>0;h/=2)
	{	cnt++;
		s+=h;
		if(cnt==10)
			printf("%d %d",s,h);
	
	}





}
