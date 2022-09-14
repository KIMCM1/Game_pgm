#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	char c;
	scanf("%c", &c);
	while(1)
	{
		if(c =='\n'){
			break;
		}
		printf("%c", c);
		scanf("%c", &c);
		
	}
	printf("\n	goodbye");
	return 0;
} 
