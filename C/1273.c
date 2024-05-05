#include <stdio.h>

int main() {
	int a;
	scanf("%d", &a);
	for (int  b = 1; b <= a; b++)
	{
		if(a % b == 0);
		else if (a % b >= 1) continue;
		printf("%d ", b);
	}

	

	return 0;
}
