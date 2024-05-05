#include<stdio.h>

int main() {
	int a[100], b, c;

	scanf("%d %d %d %d %d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]);
	scanf("%d", &b);

	for (c =1; c <= b; c++); {
		printf("%d", a[b]);
	}




	return 0;
}
