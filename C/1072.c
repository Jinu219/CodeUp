#include <stdio.h>

int main() {
	int n;
	int a;
	int i = 0;

	scanf("%d\n", &n);
	while (i < n)
	{
		scanf("%d", &a);
		printf("%d\n", a);
		i++;
	}
	
	return 0;
}
