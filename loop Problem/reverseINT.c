#include<stdio.h>
int main(){
    int n;
    int reverse=0;
    // input
    printf("Enter a num:");
    scanf("%d",&n);
    //loop
    while(n>0){
        int rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    //output
    printf("Reverse of num is :%d\n",reverse);


    return 0;
}