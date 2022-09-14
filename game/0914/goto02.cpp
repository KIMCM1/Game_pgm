#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y);
int main(void)
{
	int dan,i;
	dan = 1;
	for(int i=1;i<=9;i++)
	{
	gotoxy(1, i);
	printf("%d*%d=%2d  ",dan,i,dan*i);
	printf("%d*%d=%2d  ",(dan+1),i,(dan+1)*i);
	printf("%d*%d=%2d  ",(dan+2),i,(dan+2)*i);
	printf("%d*%d=%2d  ",(dan+3),i,(dan+3)*i);
	printf("%d*%d=%2d  ",(dan+4),i,(dan+4)*i);
	printf("%d*%d=%2d  ",(dan+5),i,(dan+5)*i);
	printf("%d*%d=%2d  ",(dan+6),i,(dan+6)*i);
	printf("%d*%d=%2d  ",(dan+7),i,(dan+7)*i);
	printf("%d*%d=%2d  ",(dan+8),i,(dan+8)*i);
	
	}
	printf("\n");
	return 0;
}
void gotoxy(int x, int y)
{
	COORD Pos = {x - 1, y - 1};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
//3´Ü Ãâ·Â
