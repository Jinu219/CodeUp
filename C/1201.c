#include <stdio.h>


int main() {
	int a;
	scanf("%d", &a);
	
	if (a >= 1) printf("양수");
	else if (a <= -1) printf("음수");
	else if (a == 0) printf("0");

	return 0;
}
