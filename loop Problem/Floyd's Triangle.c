#include<stdio.h>
int main(){
	  /*1  
        2 3  
        4 5 6  
        7 8 9 10  
        11 12 13 14 15 
	 */
	int n,i,j;
	int count=0;
	printf("Enter a num");
	scanf("%d",&n);
	// loop
	
	for(i = 1; i <= n; i++){
		
		for(j = 1; j <= i; j++){
			//increase count after each loop
			count++;
			printf(" %d ",count);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
