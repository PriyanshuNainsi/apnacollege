#include<stdio.h>
int  main(){
	char i,j,k;
	// loop
	
	for(i='G';i<'A';i--){
		for(j='A';j<=i;j++){
			printf("%c",j);
			for(k='G';k<i;k++){
				printf(" ");
			}
			
		}
	printf("\n");
	}
}
