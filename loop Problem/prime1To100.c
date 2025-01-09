#include<stdio.h>
int main(){
   int n,count;
   printf("enter your num");
   scanf("%d",n);
   
   //loop
   for(int i=2;i<n;i++){
    count=0;
    for(int j=1;j<=n;j++){
        if(i%j==0){
            count++;
        }
        else{j++;}
    }
    if(count>2){printf("It is not a prime num%d\n",i);}
    else printf("It is a prime num%d\n",i);
   }


   


    return 0;
}