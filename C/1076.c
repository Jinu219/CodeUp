#include <stdio.h>

int main() {
	char a;
	scanf("%c", &a);

	for (char b = 97; b <= a; b++)
		printf("%c ", b);


	return 0;
}
