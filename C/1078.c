#include <stdio.h>

int main() {
	int a = 0;
	int b = 0;
	scanf("%d", &a);

	for(int d = 1; d <= a; d++)
	{
		if(d % 2==0)
		b = b + d;
	}
	
	printf("%d", b);


	return 0;
}
