#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<conio.h>
void gotoxy(int,int);
void setcolor(int,int);
void draw_ship(int, int);
void setcursor(bool);
void draw_ammo(int,int);
void delete_ammo(int,int);
int main()
{
	setcursor(0);
	char ch = '.';
	int x = 38,x2[5]={38,38,38,38,38}, y = 20,y2[5]={20,20,20,20,20};
	int moving = 0,shoot[5]={0,0,0,0,0},count=-1;
	draw_ship(x, y);
	do {
		for(int i=0;i<5;i++){
			if(shoot[i]== 0){
				x2[i]=x;
			}
		}
		if (kbhit()) {
			ch = getch();
			if (ch == 'a') {
				moving = 1 ; 
			}
			else if (ch == 'd'){
				moving = 2;
			}
			else if (ch == 's'){
				moving = 0;
			}
			else if (ch == ' '&&count < 4){
				++count;
				shoot[count] = 1;
			}
			}
			if(moving == 1 && x>0){
				draw_ship(--x,y);
			}
			else if(moving == 2 && x<75){
				draw_ship(++x,y);
			}
			for (int j=0;j<=4;j++){
				if(shoot[j]==1 && y2[j]>0){
					delete_ammo(x2[j],y2[j]);
					draw_ammo(x2[j],--y2[j]);
				}
				if(y2[0]==1){
					delete_ammo(x2[0],y2[0]);
					shoot[0]=0;
					y2[0]=y;
					--count;
					for(int a=1;a<=4;a++){
						shoot[a-1] = shoot[a];
						y2[a-1] = y2[a];
						x2[a-1] = x2[a];
					}
					shoot[4]=0;
					y2[4]=y;
					x2[4]=x;
				}
			}
			fflush(stdin);
		Sleep(100);
	} 
	while (ch != 'x');
	return 0;
}
void gotoxy(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void setcolor(int fg,int bg){
	HANDLE hConsole =GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, bg*16+fg);
}
void draw_ship(int x, int y)
{
	gotoxy(x, y);
	x--;
	setcolor(0,0);
	printf(" ");
	setcolor(2,4);
	printf(" <-0-> ");
	setcolor(0,0);
	printf(" ");
}
void setcursor(bool visible){
	HANDLE console =GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible =visible;
	lpCursor.dwSize =20;
	SetConsoleCursorInfo(console,&lpCursor);
}
void draw_ammo(int x,int y){
	gotoxy(x += 4,--y);
	setcolor(2,0);
	printf("|");
}
void delete_ammo(int x,int y){
	gotoxy(x += 4,--y);
	setcolor(0,0);
	printf(" ");
}
