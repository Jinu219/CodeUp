#include <stdio.h>

int n;



void f() {
	if (n <= -1) printf("negative"); else if (n == 0) printf("zero"); else printf("positive");
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
