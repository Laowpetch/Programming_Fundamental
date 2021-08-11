#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
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
int main(){
	printf("B\n");
	printf("%c",cursor(0,0));
	return 0;
}
