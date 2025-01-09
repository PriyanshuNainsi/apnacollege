#include<stdio.h>
#include<math.h>
int main(){
    int n;
    //input
    printf(" enter a num");
    scanf("%d",&n);
   
   int i;
   int sum=0;
   
    //loop
    for( i = 1; i <= n;i++){
    	
        
     sum+=pow(i,i);
    }
    printf("%d",sum);
return 0;
}
