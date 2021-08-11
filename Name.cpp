#include<stdio.h>
int main() {
	char name[100];
	scanf("%[^\n]",&name);
	printf("Hello %s \\(\"^\")/!!!",name);
	return 0;
}
