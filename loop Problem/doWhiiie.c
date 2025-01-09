#include<stdio.h>
int main(){
	
	
	int i;
	int n;
	printf("enter num");
	scanf("%d",&n);
	int count=0;
	for(i=1;i<n;i++){
	     if(n%i==0){
	     count++;
		 }	
		 
		 
	}
	if(count>0){printf("it is not a prime");
	}
	else{
		printf("it prime");
	}
	
	return 0;
}
