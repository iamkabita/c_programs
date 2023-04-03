#include<stdio.h>
#include<conio.h>
#include<windows.h>

gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void main()
{
	int x=40,y=12,end=1;
	char ch;
	gotoxy(x,y);
	printf("Kabita Barnwal");
	while(end)
	{
		ch= getch();
		switch(ch)
		{
			case 'a':
				x--;
				break;
			case 's':
				x++;
				break;
			case 'w':
				y--;
				break;
			case 'z':
				y++;
				break;
			case 27:
				end=0;
		}
		system("cls");
		gotoxy(x,y);
		printf("Kabita Barnwal");
	}
	
}
