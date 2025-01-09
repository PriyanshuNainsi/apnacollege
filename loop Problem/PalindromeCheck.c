#include<stdio.h>
int main(){
    int n,temp;
    
    int reverse=0;
    // input
    printf("Enter a num:");
    scanf("%d",&n);
    temp=n;
    //loop
    while(n>0){
        int rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    //output
    if(temp==reverse){

        printf("yes it is a palindrome");
    }
    else printf("It is not a palindrome");
    


    return 0;
}