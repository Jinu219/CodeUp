#include <stdio.h>

int n, m;
int max() { if (m < n) return n; else return m; }
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}
