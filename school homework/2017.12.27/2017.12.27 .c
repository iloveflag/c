/*struct str{
int xh;
float fs;

}
main(){
struct str st;
scanf("%d %f",&st.xh,&st.fs);
printf("%d %f",st.xh,st.fs);
}*/



/*struct str{
int xh;
float fs;
char xm[10];
}
main(){
struct str st;
scanf("%d %f %s",&st.xh,&st.fs,st.xm);
printf("%d %f %s",st.xh,st.fs,st.xm);
}*/



/*struct str{
int xh;
char xm[10];
int shuxue;
int yuwen;
int yinyu;
}
main(){
int x;
struct str st;
scanf("%d %s %d %d %d",&st.xh,st.xm,&st.shuxue,&st.yuwen,&st.yinyu);
x=st.shuxue+st.yuwen+st.yinyu;
printf("%d %s %d %d %d %d",st.xh,st.xm,st.shuxue,st.yuwen,st.yinyu,x);
}*/

/*struct day{
int y;
int m;
int d;
};
struct str{
int xh;
struct day csny;
char xm[10];
}
main(){
struct str st;
scanf("%d %d %d %d %s",&st.csny.y,&st.csny.m,&st.csny.d,&st.xh,st.xm);
printf("%d %d %d %d %s",st.csny.y,st.csny.m,st.csny.d,st.xh,st.xm);
}*/

/*struct str{
int xh;
float fs;
}
main(){
int i;
struct str st[2];
for(i=0;i<2;i++)
scanf("%d %f",&st[i].xh,&st[i].fs);
for(i=0;i<2;i++)
printf("%d %f\n",st[i].xh,st[i].fs);

}*/

/*struct str{
int xh;
float fs;
char xm[10];
}
main(){
int i;
struct str st[2];
for(i=0;i<2;i++)
scanf("%d %f %s",&st[i].xh,&st[i].fs,st[i].xm);
for(i=0;i<2;i++)
printf("%d %f %s\n",st[i].xh,st[i].fs,st[i].xm);

}
*/

/*=====================================================ื๗าต 
struct day{
int y;
int m;
int d;
}
main(){
int i;
struct day cs[2];
for(i=0;i<2;i++)
scanf("%d %d %d",&cs[i].y,&cs[i].m,&cs[i].d);
for(i=0;i<2;i++)
printf("%d %d %d\n",cs[i].y,cs[i].m,cs[i].d);
}*/


/*
struct day{
int y;
int m;
int d;
};
struct str{
int xh;
char xm[10];
struct day csny;
};
main(){
struct str st[2];
int i;
for(i=0;i<2;i++)
scanf("%d %d %d %d %s",&st[i].csny.y,&st[i].csny.m,&st[i].csny.d,&st[i].xh,st[i].xm);
for(i=0;i<2;i++)
printf("%d %d %d %d %s",st[i].csny.y,st[i].csny.m,st[i].csny.d,st[i].xh,st[i].xm);
}*/

struct day{
int y;
int m;
int d;
}
main(){
struct day csny[2];
int i;
for(i=0;i<2;i++)
scanf("%d %d %d",&csny[i].y,&csny[i].m,&csny[i].d);
for(i=0;i<2;i++)
printf("%d %d %d",csny[i].y,csny[i].m,csny[i].d);
}













