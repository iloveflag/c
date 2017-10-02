A.for—≠ª∑

#include <stdio.h>
int f(int x);
int main (){
    int x;
    scanf("%d",&x);
    if(x>=2 &&x<=1000000){
        printf("%d=",x);
        f( x ) ;
    }
    return 0;
}
int f(int x){
    int cnt=1;
  for (int i=2;i<=x;){
      if (x%i==0){ 
          if (cnt==1)
          printf("%d",i);
          else
          printf("x%d",i);
          cnt++;
         x /=i;
    }
      else i++;
    }
}
B.while—≠ª∑

#include <stdio.h>
int f(int x);
int main (){
    int x;
    scanf("%d",&x);
    if(x>=2 &&x<=1000000){
        printf("%d=",x);
        f( x ) ;
    }
    return 0;
}
int f(int x){
    int cnt=1;
    int i=2;
    while(x >= i)
    {
       if(x % i == 0){
             if(cnt==1) 
            printf("%d", i);
        else 
            printf ("x%d",i);
            cnt++;
           x /= i;
       }
        else i++;
   }
    return 0;
}
