#include<stdio.h>
int fibbo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

return fibbo(n-1) + fibbo(n-2);
}
int main(){
printf("%d",fibbo(7));

return 0;
}