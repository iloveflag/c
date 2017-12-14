void px(int b[],int k){
	int i,j,t;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
		{	if(k==0)
			{
				if(b[j]>b[j+1])
				{
					t=b[j];
					b[j]=b[j+1];
					b[j+1]=t;
				}
			}
			else
			{
				if(b[j]<b[j+1])
				{
					t=b[j];
					b[j]=b[j+1];
					b[j+1]=t;
				}

			}
		}
}

main(){
int a[10],i,k;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("ÊäÈëk\n");
scanf("%d",&k);
px(a,k);
for(i=0;i<10;i++)
printf("%d\n",a[i]);

}
