/*main(){
 int a[5][5],b[5],i,j,max;
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
	 scanf("%d",&a[i][j]);
 }
 for(i=0;i<5;i++)
 {	max=a[i][0];
	 for(j=0;j<5;j++)
	 {
		if(max<a[i][j])
			max=a[i][j];
	 
	 
	 }
	 b[i]=max;
 }
 for(i=0;i<5;i++)
	 printf("%d\n",b[i]);

}*/

/*main(){
 int a[5][5],b[5],i,j,min;
 for(i=0;i<5;i++)
 {
 for(j=0;j<5;j++)
	 scanf("%d",&a[i][j]);
 }
 for(j=0;j<5;j++)
 {	min=a[0][j];
	 for(i=0;i<5;i++)
	 {
		if(min>a[i][j])
			min=a[i][j];
	 
	 
	 }
	 b[j]=min;
 }
 for(i=0;i<5;i++)
	 printf("%d\n",b[i]);

}*/

main(){
int a[5][5],i,j,k,t,max,min;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
scanf("%d",&a[i][j]);

}
for(i=0;i<5;i++)
{	min=a[i][0];
	k=0;
	for(j=0;j<5;j++)
	{
		if(a[i][j]<min)
		{	
			min=a[i][j];
			k=j;
		}
	}
	max=a[0][k];
	t=0;
	for(j=0;j<5;j++)
	{
		
		if(max<a[j][k])
		{	max=a[j][k];
			t=j;
		}
			
	
	}
	if(max==min)
		printf("%d %d",t,k);

}



}