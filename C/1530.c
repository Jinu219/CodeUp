#include <stdio.h>

char f()
{
  return 'A'; //호출했던 위치에 문자(char) A 를 가져다 놓으며 복귀(자동으로 함수 종료)
}
int main()
{
    printf("%c", f() );
    return 0;
}
