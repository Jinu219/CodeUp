#include <stdio.h>

int n;



void f(int x) //x 대신에 원하는 매개 변수명을 사용할 수 있다.
{
  if(x == 1) printf("hello\n");
  else if(x == 2) printf("world\n");
  else printf("\n");
  return; //생략 가능
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
