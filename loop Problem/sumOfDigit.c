#include<stdio.h>
int main(){
    int n;
    int sum=0;
    // input
    printf("Enter a num:");
    scanf("%d",&n);

    // loop
    while(n>0){
        int rem=n%10;
        sum+=rem;
        n/=10;
    }

   // output
   printf("Sum of digit is:%d\n",sum);



    return 0;
}