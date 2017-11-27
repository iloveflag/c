#include <stdio.h>
main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int x,y,z,t,sum=0,i;
	scanf("%d %d %d",&x,&y,&z);
	t=0;
	if(x%400==0||x%4==0&&x%100!=0)
		a[2]=a[2]+1;
	for(i=1;i<y;i++)
		sum+=a[i];
	sum+=z;
	printf("%d",sum);


}
