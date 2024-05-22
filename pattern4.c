#include<stdio.h>
int main(){
int raw,clm,num;
scanf("%d",&num);
for(raw=1;raw<=num;raw++){
   for(clm=1;clm<=raw;clm++){

        printf("*");
   }
   printf("\n");
}
}

