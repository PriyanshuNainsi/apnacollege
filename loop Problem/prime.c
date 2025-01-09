#include<stdio.h>
int main(){
	int i;
	int n;
	printf("enter a num");
	scanf("%d",&n);
	int count=0;
	for( i=1;i<=n;i++){
		if(n%2==0){
			count++;
		}
	}
	if(count>2){
		printf("not a prime");
		
	}
	else printf("prime nnumber");
}
