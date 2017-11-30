/*main(){
int a[5][4];
int i,j;
for(i=0;i<5;i++)
	for(j=0;j<4;j++)
	scanf("%d",&a[i][j]);
for(i=0;i<5;i++)
{
	for(j=0;j<4;j++)
	printf("%d ",a[i][j]);
	printf("\n");
}
}*/

/*main(){
int a[5][4];
int i,j;
for(j=0;j<4;j++)
{
	for(i=0;i<5;i++)
		scanf("%d",&a[i][j]);

}
for(i=0;i<5;i++)
{
	for(j=0;j<4;j++)
		printf("%d ",a[i][j]);
	printf("\n");


}
}
*/
/*main(){
int a[5][4],i,j,sum=0;
for(i=0;i<5;i++)
{
	for(j=0;j<4;j++)
		scanf("%d",&a[i][j]);

}

for(i=0;i<5;i++)
{
	for (j=0;j<4;j++)
		sum+=a[i][j];
}
printf("%d",sum);




}
*/




/*main(){
int a[5][4],i,j,max,m=0,n=0;
for(i=0;i<5;i++)
{

	for(j=0;j<4;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
max=a[0][0];
for(i=0;i<5;i++)
{
	for(j=0;j<4;j++)
	{
		if(a[i][j]>max)
		{
			max=a[i][j];
			m=i+1,n=j+1;
		}
	
	}


}
printf("max=%d,第%d行，第%d列",max,m,n);
}*/






/*main(){
int b[3][3],a[3],i,j,sum;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);

}
for(i=0;i<3;i++)
{	sum=0;
	for(j=0;j<3;j++)
	{
		sum+=b[i][j];
	}
	a[i]=sum;

}
for(i=0;i<3;i++)
printf("%d\n",a[i]);
}
*/


main(){
 int a[10],b[3][4],i,j,sum;
 for(i=0;i<3;i++)
 {
	for(j=0;j<4;j++)
		scanf("%d",&b[i][j]);
 }
 for(j=0;j<4;j++)
 {	sum=0;
	for(i=0;i<3;i++)
		sum+=b[i][j];
	a[j]=sum;
 }
 for(j=0;j<4;j++)
	 printf("%d\n",a[j]);



}












