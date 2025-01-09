#include<stdio.h>
#include<stdbool.h>
int main(){
	//declaration
	int i;
	int n;
	bool flag=false ;
	
	//input
	printf("Enter num");
	scanf("%d",&n);
	int sum=0;
	int count=0;
	// loop
	if(n<0){
		n=-n;
		flag=true;
	}
	 while(n>0){
		int rem = n%10;
		sum=sum*10+rem;
		n= n/10;
		count+=1;
		
	}
	//output
	if(flag=true){
		printf("sum is %d\n",sum);
	}
	if(flag=false){
		printf("sum is %d\n",-sum);
	}
	printf("num of digit %d",count);
}
