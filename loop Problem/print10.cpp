#include<stdio.h>
int main(){
	int n;
	printf("Enter a num");
	scanf("%d",&n);
	int i;
	int sum=1;
	for(i=1;i<=n;i++){
		sum*=i;
		
	}
	printf("The fact of a num is ::%d",sum);
}
