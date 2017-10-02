?#include <stdio.h>

int main()

{

int BJT;

       scanf("%d",&BJT);

int UTC;



if( BJT>=0 && BJT<=2359 &&BJT%100<60)

{  

   if(BJT>=800)

{

UTC=BJT-800 ;

}

else

{

UTC=BJT+1600;

}

printf("%d",UTC); 

} 



return 0; 

}
