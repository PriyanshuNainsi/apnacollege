#include<stdio.h>
int main(){
      int i,j,k;
      int n; 

      printf("Enter input a num");
      scanf("%d",&n);
         
      for(i = 1 ;i <= n; i++){
              //print space
        for(j = i; j < n; j++){  
                printf(" ");
        }
        //print stars
        for(k=1; k <= (2*i-1); k++){
                printf("*");
        }
       printf("\n");
      }

    return 0;
}
