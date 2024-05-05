#include <stdio.h>

int main(){
	
	int a;
	scanf("%d", &a);

	if (a < 10) printf("small");
	else if (10 <= a) printf("big");


	return 0;
}
