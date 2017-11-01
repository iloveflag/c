/*main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
		if(b==2 && a%4==0 && a%100!=0 || a%400==0 )
			printf("该月有28天");
		else if(b==2)
			printf("该月有29天");
		else if(b<=7)
		{
			if(b%2==0)
				printf("该月有30天");
			else
				printf("该月有31天");
		}
		else
		{
			if(b%2==0)
				printf("该月有31天");
			else
				printf("该月有30天");
		}
			
		
	
		


}*/


/*main()
{
	int a,b,c,t,s;
	scanf("%d %d %d",&a,&b,&c);
	if(a%4==0 && a%100!=0 || a%400==0 )
		t=28;
	else
		t=29;
	switch (b)
	{
	case(1):printf("%d",s=c);break;
	case(2):printf("%d",s=31+c);break;
	case(3):printf("%d",s=31+t+c);break;
	case(4):printf("%d",s=31+t+31+c);break;
	case(5):printf("%d",s=31+t+31+30+c);break;
	case(6):printf("%d",s=31+t+31+30+31+c);break;
	case(7):printf("%d",s=31+t+31+30+31+30+c);break;
	case(8):printf("%d",s=31+t+31+30+31+30+31+c);break;
	case(9):printf("%d",s=31+t+31+30+31+30+31+31+c);break;
	case(10):printf("%d",s=31+t+31+30+31+30+31+31+30+c);break;
	case(11):printf("%d",s=31+t+31+30+31+30+31+31+30+31+c);break;
	case(12):printf("%d",s=31+t+31+30+31+30+31+31+30+31+30+c);break;


	}






}*/



/*main()
{
  char a,b,c;
  printf("现在正在下雨吗？输入Y或N:");
  scanf("%c",&a);
  if(a=='N')
  {
	printf("现在没有下雨。\n");
	printf("今天会有太阳吗(Y/N)");
	scanf("%c",&c);
	scanf("%c",&b);
	if(b=='Y')
	printf("今天是晴天!");
	else
	printf("今天是阴天!");  
  }
  else
  printf("现在正在下雨。");




}*/
/*#include <time.h>
#include <s>

main()
 int a,b;
	srand((int)time(NULL));
	a=rnd()%1000;
	scanf("%d",&b)
	int x[3],y[3];
	x[0]=a%10;
	x[1]=a%100/10;
	x[2]=a/100;
	y[0]=b%10;
	y[1]=b%100/10;
	y[2]=b/100;


}










}*/


//------------------------------------------------------whlie-----------------------------------

/*main()
{
	int i=1,sum=0;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("%d",sum);

}*/


/*main()
{
	int i=0,sum=0;
	while(i<=99)
	{    i++;
		sum+=i;
		
	}
	printf("%d",sum);

}*/
/*main()
{
	int i=1,sum=0;
	do
	{    
		sum+=i;
		i++;
	}
	while(i<=100);
	printf("%d",sum)

}*/


/*main()
{
 int i=1,sum=0;
 for(;i<=100;i++)
	 sum+=i;
 printf("%d",sum);

}*/


/*main()
{
 int i=1,sum=0,n;
 scanf("%d",&n);
 while(i<=n)
 {
	 sum+=i;
	 i++;
 }
 printf("%d",sum);


}*/


/*main()
{
 int i=1,sum=0,n;
 scanf("%d",&n);
 do
 {
	 sum+=i;
	 i++;
 }
 while(i<=n);
 printf("%d",sum);

}*/



/*main()
{
 int i=1,sum=0,n;
 scanf("%d",&n);
 for(;i<=n;i++)
	 sum+=i;
printf("%d",sum);
}*/

/*main()
{

	int i=0,sum=0;
	while(i<=100)
	{
		sum+=i;
		i=i+3;
	}
	printf("%d",sum);



}*/

/*main()
{
	int i=0,sum=0;
	for(;i<=100;)
	{
		if(i%3==0)
		{
			sum+=i;
		}
		i++;
	}
	printf("%d",sum);
}*/



//-------------------------------
/*main()
{
	int i=0,sum=0;
	for(;i<=100;i++)
	{	
		if(i%3==2||i%5==3)
			sum+=i;
	}
	printf("%d",sum);



}*/


/*main()
{
   	int i=0,sum=0;
	while(i<=100)
	{
	
		if(i%3==2||i%5==3)
			sum+=i;
		    i++;
	}
	printf("%d",sum);


}*/
/*main()
{
   	int i=0,sum=0;
	do
	{
	
		if(i%3==2||i%5==3)
			sum+=i;
		    i++;
	}
	while(i<=100);
	printf("%d",sum);


}*/
//------------------------




//+++++++++++++++++++++
/*main()
{
	float i=1,sum=0;
	for(;i<=99;i=i+2)
	sum+=1/i;
	printf("%f",sum);


}*/

/*main()
{
	float i=1,sum=0;

	while(i<=99)
	{
		sum+=1/i;
		i=i+2;
	}
	printf("%f",sum);


}*/

/*main()
{
	float i=1,sum=0;

	do
	{
		sum+=1/i;
		i=i+2;
	}
	while(i<=99);
	printf("%f",sum);


}*/
//+++++++++++++++++++++++++++

