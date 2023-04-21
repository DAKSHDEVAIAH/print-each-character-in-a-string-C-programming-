#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[50]="abcdefghijklmnopqrstuvwxyz";
	str[strlen(str)]='\0';	
	for(int i=0;i<strlen(str);i++)
	{
		if(i/10!=0)
			printf(" %c ",str[i]);
		else
			printf("%c ",str[i]);
	}
	printf("\n");
	for(int i=0;i<strlen(str);i++)
	{
		printf("%d ",i+1);
	}
	printf("\n");
}
