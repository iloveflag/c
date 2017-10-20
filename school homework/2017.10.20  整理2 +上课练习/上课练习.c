/*main()
{

int a,b,c,t;
scanf("%d %d %d",&a,&b,&c);

if(a<b)
{
	t=a;
	a=b;
	b=t;
}
if(a<c)
{
	t=c;
	a=c;
	c=t;
}
if(b<c)
{
	t=b;
	b=c;
	c=t;
}

printf("%d %d %d",a,b,c);

}*/
/*main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
	{                                           
	 printf("%d",a);
	}
	else
	{
	printf("%d",b);
	}
}*/
/*main()
{
	 int x,t;
	 scanf("%d",&x);
	 
	 if((x%4==0 && x%100 !=0)||(x%400==0))
	 {
		printf("是闰年");
	 }
	 else
	 {
		printf("不是闰年");
	 }
}   */ 

/*main()
{
   int x,a,b,c,t;
   scanf("%d",&x);
   a=x/100;
   b=x%100/10;
   c=x%10;
   t=a*a*a+b*b*b+c*c*c;
	if(x==t)
	   printf("ok");

}   */
/*main()
{
	int x,a,b,c,d,f;
	scanf("%d",&x);
	a=x/10000;
	b=x/1000%10;
	c=x/100%10;
	d=x%100/10;
	f=x%10;
	if(a==f && b==d )
	{
		printf("ok");
	}
	else
	{
		printf("no");
	}
	


}            */   
/*main()
{
	int x,t;
	scanf("%d",&x);
	if(x <= 3500)
	{
	 printf("不用纳税");  
	}
	else
	{
	t=(x-3500)*0.03;
	printf("应该纳税%d元",t);
	}


}  */
main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b%a==0 && c%a==0)
	{
	printf("ok");
	}
	else
	{
	printf("no");
	}


}                                           
               
                     
                   
                              
                         
                 
                
 






