#include<stdio.h>
int  fibb(int n){
    // base case 
    if(n==1){
        return 1;
    }
    // kaam
   printf("hello world\n");
   //recursive
     return fibb(n-1);
   
   

   
    
  
}
int main(){
      fibb(5);
    return 0;
}