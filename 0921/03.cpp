#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Prome (char string[]);

int main() {
	char string[100];
	int leng = 0;
	
	printf("���ڿ��� �Է��ϼ���:");
	gets(string);

	Prome(string);
	return 0;
} 

void Prome(char string[]){
	int i;
    	int j=0;
	int length;
	
	length = strlen(string);
	for(i = 0 ; i < length/2; i++) {
		if(string[i] != string[length - 1 - i]) {
			j = 1;
		}
	}
	if(j==0) {
		printf("ȸ�� �½��ϴ�");
	}
	else {
		printf("ȸ���� �ƴմϴ�");
	} 
}
