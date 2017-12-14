/*main(){
int a[5][3],b[3],i,j;
float s;
for(i=0;i<5;i++)
{
	for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
}
for(j=0;j<3;j++)
{	s=0;
	for(i=0;i<5;i++)
		s=s+a[i][j];
	b[j]=s/5.0;

}
for(i=0;i<3;i++)
printf("%d\n",b[i]);

}*/

/*main()
{
int a[10][10],i,j;
a[0][0]=1,a[1][0]=1,a[1][1]=1;
for(i=2;i<10;i++)
{	a[i][0]=a[i][i]=1;
	for(j=1;j<i;j++)
	{
		a[i][j]=a[i-1][j]+a[i-1][j-1];
	
	}
}
for(i=0;i<10;i++)
{
	for(j=0;j<i+1;j++)
		printf("%d ",a[i][j]);
	printf("\n");
}
}*/


/*int ming(int x,int y);
main(){
int x,y,t;
scanf("%d %d",&x,&y);
t=ming(x,y);
printf("%d",t);
}
int ming(int x,int y){
int i,s=1;
if(y==1)
s=x;
else
s=ming(x,y-1)*x;
return(s);
}*/























































