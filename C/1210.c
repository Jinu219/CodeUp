#include <stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (a == 1 && b == 1) printf("angry");
	else if (a == 1 && b == 2) printf("angry");
	else if (a == 1 && b == 3) printf("angry");
	else if (a == 1 && b == 4) printf("no angry");
	else if (a == 1 && b == 5) printf("no angry");

	if (a == 2 && b == 1) printf("angry");
	else if (a == 2 && b == 2) printf("angry");
	else if (a == 2 && b == 3) printf("angry");
	else if (a == 2 && b == 4) printf("no angry");
	else if (a == 2 && b == 5) printf("no angry");
	
	if (a == 3 && b == 1) printf("angry");
	else if (a == 3 && b == 2) printf("angry");
	else if (a == 3 && b == 3) printf("no angry");
	else if (a == 3 && b == 4)printf("no angry");
	else if (a == 3 && b == 5) printf("no angry");

	if (a == 4 & b == 1) printf("angry");
	else if (a == 4 && b == 2)printf("no angry");
	else if (a == 4 && b == 3)printf("no angry");
	else if (a == 4 && b == 4)	printf("no angry");
	else if (a == 4 && b == 5) printf("no angry");

	if (a == 5 && b == 1) printf("no angry");
	else if (a == 5 && b == 2) printf("no angry");
	else if (a == 5 && b == 3) printf("no angry");
	else if (a == 5 && b == 4) printf("no angry");
	else if (a == 5 && b == 5) printf("no angry");

	return 0;
}
