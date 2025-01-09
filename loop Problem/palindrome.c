#include<stdio.h>
int main(){
	int n;
	printf("Enter a num");
	scanf("%d",&n);
	int temp=n;
	int p=0;
	while(n>0){
		int rem=n%10;
		p=p*10+rem;
		n=n/10;
		
	}
	if(temp==p){
		printf("num is palindrome%d",n);
		
	}
	else printf("num is not a palindrome");
}
