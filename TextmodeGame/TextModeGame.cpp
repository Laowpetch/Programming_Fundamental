#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
void gotoxy(int,int);
void draw_ship(int,int);
void draw_bullet(int,int);
void clear_bullet(int,int);
void frandomstars(void);
char cursor(int,int);
void randomstars(void);
void setcursor(bool);
int main() {
	setcursor(0);
	char ch='.';
	int x=38,y=20,star=0,score=0;
	int bx,by,i;
	int bullet = 0;
	frandomstars();
	draw_ship(x,y);
	gotoxy(70,0);
	printf("score : %d",score);
	do {
		if (_kbhit()) {
			ch=_getch();
			if(ch=='a') {
				draw_ship(--x,y);
				}
			if(ch=='s'){
				draw_ship(++x,y);
				}
			if(bullet!=1 && ch==' ') {
				bullet=1; 
				bx=x+3; 
				by=y-1;
				}
		fflush(stdin);
		}
		if (bullet==1) {
			clear_bullet(bx,by);
			if (by==2) {
				bullet=0;
			}
			
			else if(cursor(bx,by-1)=='*'){
				bullet=0;
				gotoxy(bx,by-1);
				printf(" ");
				score++;
				gotoxy(78,0);
				printf("%d",score);
				star--;
				randomstars();
			}
			
			else {
				draw_bullet(bx,--by);
			}
		}
		Sleep(100);
		}
		while (ch!='x');
	return 0;
	}
void gotoxy(int x, int y) {
	COORD c = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);
	}
void draw_ship(int x,int y ){
	gotoxy(x,y); printf(" <-0-> ");
	}
void draw_bullet(int x,int y) {
	gotoxy(x,y); 
	printf("^");
	Beep(700,100);
	}
void clear_bullet(int x,int y) {
	gotoxy(x,y); printf(" ");
	}
char cursor(int x, int y){
	HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
	char buf[2];
	COORD c = {x,y}; 
	DWORD num_read;
		if(!ReadConsoleOutputCharacter(hStd,(LPTSTR)buf,1,c,(LPDWORD)&num_read) ){
			return '\0';
		}
		else{
			return buf[0];
		}
}
void frandomstars(void){
	srand( time( NULL ) );
	int star=0;
	while(star<20){
		int a,b;
		a=rand()%71;
		b=rand()%6;
		if(a>9&&b>1){
			if (cursor(a,b)!='*'){
			gotoxy(a,b);
			printf("*");
			star++;
			}
	}	
	}
}
void randomstars(void){
	int a,b,x=1;
	while(x!=0){
		a=rand()%71;
		b=rand()%6;
			if(a>9&&b>1){
				if (cursor(a,b)!='*'){
					gotoxy(a,b);
					printf("*");
					x=0;
				}				
			}
	}
}
void setcursor(bool visible){
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = 20;
	SetConsoleCursorInfo(console,&lpCursor);
}
