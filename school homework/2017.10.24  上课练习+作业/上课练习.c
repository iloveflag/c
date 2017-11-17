/*main()
{
	int a;
	scanf("%d",&a);
	if(a>=0 && a<=100)
	{
		printf("合格");
	}
	else 
	{
	printf("不合格");
	}
}*/




/*main()
{
	int a;
	scanf("%d",&a);
	if(a>=0 && a<=100)
	{
		printf("合法");
		if(a>=90 && a<=100)
		{
		printf("优秀");
		}
		else
		{
		printf("一般");
		}
	}
	else 
	{
	printf("不合法");
	}
}*/



/*main()
{
	int a;
	scanf("%d",&a);
	if(a>=0 && a<=100)
	{
		printf("合法");
		if(a>=90 && a<=100)
		{
		printf("优秀");
		}
		else if(a>=80)
			{	
			printf("良好");
			}
			else
			{
			printf("一般");
			}
	}
	else 
	{
	printf("不合法");
	}
}*/

/*main()
{
	int a;
	scanf("%d",&a);
	if(a>=0 && a<=100)
	{
		printf("合法\n");
		if(a>=90 && a<=100)
		{
		printf("优秀");
		}
		else if(a>=80)
			{	
			printf("良好");
			}
		else if(a>=70)
			{
			printf("中等");
			}
		else if(a>=60)
			{
			printf("合格");
			}
		else
			{
			printf("不合格");
			}
	}
	else 
	{
	printf("不合法");
	}
}*/

main()
{
	int a;
	scanf("%d",&a);
	if(a>=0 && a<=100)
	{
		if(a>=90 && a<=100)
		{
			printf("优秀");
		}
		if(a>=80 && a<90)
		{
			printf("良好");
		}
		if(a>=70 && a<80)
		{
			printf("中等");
		}
		if(a>=60 && a<70)
		{
			printf("合格");
		}
		if(a>=0 && a<60)
		{
			printf("不合格");
		}
	}
	else
	{
		printf("不合法");
	}
}