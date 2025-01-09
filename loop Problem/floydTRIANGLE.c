#include <stdio.h>
void main()
{
char i,j,k;
for (i='G';i>='A';i--)
{
	for (j='A';j<=i;j++)
	{
		printf("%c",j);
	}
	for (k='G';k>i;k--)
	{
		printf(" ");
	}
printf("\b");
	for (k='G';k>i;k--)
	{
		printf(" ");
	}
	for (j=i;j>='A';j--)
	{
		printf("%c",j);
	}
printf("\n");
}
}
