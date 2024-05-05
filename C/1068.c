#include <stdio.h>

int main(){
	// 90 ~ 100 : A
	// 80 ~ 89 : B
	// 70 ~ 79 : C
	// 60 ~ 69 : D
	// 그외 : F

	int a;
	scanf("%d", &a);

	if (90 <= a && a <= 100) printf("A\n");
	else if (70 <= a && a < 90) printf("B\n");
	else if (40 <= a && a < 70) printf("C\n");
	else if (0 <= a && a < 40) printf("D\n");
	else printf("F\n");
	return 0;
}
