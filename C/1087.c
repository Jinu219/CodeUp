#include <stdio.h>

int main() {
	int a;
	int c = 0;
	scanf("%d", &a);

	for (int b = 1; c <= a; b++)
		c = c + b;
	printf("%d\n", c);
	return 0;
}
