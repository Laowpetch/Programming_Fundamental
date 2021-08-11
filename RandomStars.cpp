#include<stdio.h>
#include<windows.h>
#include<time.h>
void gotoxy(int x, int y) {
	COORD c = { x, y };
	SetConsoleCursorPosition( GetStdHandle(STD_OUTPUT_HANDLE) , c);
	}
int main()
{
int x,y,i=0;
srand( time( NULL ) );
while(i<=20){
	x=rand()%71;
	y=rand()%6;
	if(x>9&&y>1){
	gotoxy(x,y);
	printf("*");
	i++;
	}
}
return 0;
}
