/*void extr(int *b){
	int t;
	t=*b;
	*b=*(b+1);
	*(b+1)=t;




}

main(){
int a[2],*p;
p=&a;
scanf("%d %d",&a[0],&a[1]);
extr(p);
printf("%d %d",a[0],a[1]);

}
*/

/*int sum(int *b,int n){
int s=0,i;
for(i=0;i<n;b++,i++)
s+=*b;
return(s);
}
main(){
int a[5],*p,s;
for(p=a;p<a+5;p++)
scanf("%d",p);
p=a;
s=sum(p,5);
printf("%d",s);
}*/

/*int max(int *p1){
	int m,i;
	m=*p1;
	for(i=0;i<5;i++,p1++)
	{
		if(*p1>m)
			m=*p1;
	}
	return(m);


}
main(){
	int a[5],*p,t;
	for(p=a;p<a+5;p++)
		scanf("%d",p);
	p=a;
	t=max(p);
	printf("%d",t);



}*/

void px(int *b){
	int i,j,t;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++,b++)
			if(*b>*(b+1))
			{
				t=*b;
				*b=*(b+1);
				*(b+1)=t;
			}

}
main(){
	int a[10],*p;
	for(p=a;p<a+10;p++)
		scanf("%d",p);
	p=a;
	px(p);
	for(p=a;p<a+10;p++)
		printf("%d ",*p);


}
