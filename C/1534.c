#include <stdio.h>

double f()
{
  return 3.1415926535897; //실수 마지막에 아무것도 붙이지 않으면 기본적으로 double형으로 처리된다.
}
int main()
{
    printf("%.13lf", f());
    return 0;
}
