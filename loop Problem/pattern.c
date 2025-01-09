#include<stdio.h>
int main(){
	int n;
	printf("enter n");
	scanf("%d",&n);
	int i,j;
	for( i=0;i<n;i++){
		for( j=1;j<i+2;j+=2){
			printf("  a");
		}
		printf("\n");
	}
	return 0;
}
