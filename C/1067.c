#include <stdio.h>

int main() {
	long long int a;
	scanf("%lld", &a);
	if (a <= -1) {
		printf("minus\n");
	}
	if (a >= 1) {
		printf("plus\n");
	}
	if (a % 2 == 0) {
		printf("even\n");
	}
	if (a % 2 == 1) {
		printf("odd\n");
	}

	return 0;
}

