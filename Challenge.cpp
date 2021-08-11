#include<stdio.h>
#include<math.h>
int main() {
	int a, b, x, A, SD;
	printf("Input : ");
	scanf("%d%d",&a,&b);
	x = abs(a - b);
	int y[10000];
	if (a >= b) {
		for (int i; i < x; i++) {
			y[i] = a;
				a++;
		}
	}
	return 0;
}
