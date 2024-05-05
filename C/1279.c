#include <stdio.h>

int main() {
	int a, b;
	int c = 0;
	scanf("%d %d", &a, &b);

	for(int i = a; i <= b; i++){
		if (i % 2 == 0) c -= i;
		else c += i;}
	printf("%d\n", c);
	
	return 0;
}
