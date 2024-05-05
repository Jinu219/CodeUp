#include <stdio.h>

int n, m;
int min() { if (m < n) return m; else return n; }
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}
