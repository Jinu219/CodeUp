#include <stdio.h>

int f()
{
  return 1; //호출했던 위치에 int 형 값 1을 가져다 놓으며 복귀(함수 종료) 
}
int main()
{
    printf("%d", f() );
    return 0;
}
