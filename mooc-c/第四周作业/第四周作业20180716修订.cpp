#include <stdio.h>
main(){
	int n,m,sum=0;
	scanf("%d %d",&n,&m);
	if(n>0&&n<=m&&m<=200){
		int i=n,x=2,j,sum=0,cnt=0;
		
		while(i<=m){
			for(j=2;j<x;j++){
				if(x%j==0)
				break;
			}
			if(j==x)
			{
				cnt++;
			}
			if(cnt>=i&&cnt<=m){
				sum+=x;
				i++;
				
			}
			//printf("x=%d,i=%d,cnt=%d,sum=%d\n",x,i,cnt,sum);
			x++;
		}
		printf("%d",sum); 
	}

}
