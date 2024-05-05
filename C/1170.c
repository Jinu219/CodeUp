#include <stdio.h>


int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (10 > c) printf("%d%d0%d", a, b, c);
	else if (10 < c) printf("%d%d%d", a, b, c);

	
	return 0;
}
