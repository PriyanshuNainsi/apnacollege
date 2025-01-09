#include<stdio.h>
#include<conio.h>
void main(){
    int a;
    int count=0;
          //input 
printf("Enter a num:");
scanf("%d",&a);
           //logic
for(int i=1;i<a;i++){
    if(a==2){printf("neither a prime nor a composite.");
    return;}
    else if(a%i==0){
        count++;
    }
    
    
}
if(count>2){printf("It is not a prime number");}
else printf("It is a prime number.");







getch();
    
}