/*main()
{
	int a,i,max,min;
	i=1;
	while(i<=10)
	{
		scanf("%d",&a);
		if(i==1)
			max=a;
			min=a;
		if(max<a)
			max=a;
		if(min>a)
			min=a;
		i++;
	}
	printf("%d %d",max,min);


}*/
/*main()
{
	int a,s1=0,s2=0;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)break;
		if(a>0) s1++;
		else s2++;
		
	
	}

printf("%d %d",s1,s2);


}*/

/*main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	if(a<b)
		i=b;
	else
		i=a;
	while(1)
	{   
		
		if(i%a==0&&i%b==0)
			break;
		
		i++;
	}
	printf("%d",i);
}*/
/*main()
{
int a,b,i,t,max;
	scanf("%d %d",&a,&b);
	i=max=1;
	t=a<b?a:b;
	while(i<=t)
	{   
		
		if(a%i==0&&b%i==0)
		{
			if(i<max)
				max=i;
		}
		if(i==t)break;
		i++;
	}
	printf("%d",i);


}*/


/*main()
{
	int x,i=2;
	scanf("%d",&x);
	while(i<x)
	{
	if(x%i==0)break;
	i++;
	
	
	}
	if(x==i)
		printf("y");
}*/
main()
{
	int x,i,isprime=0;
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{	
			isprime=1;
			break;
		}
	
	}
	if(isprime==0)
		printf("y");
		else
		printf("n");



}











