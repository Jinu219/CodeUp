#include<stdio.h>

int main() {
	int a[100], n, i, h;
	scanf("%d", &n);   //입력받을 숫자의 갯수
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);  //입력할 숫자
	}
	for (h = 0; h < 2; h++)    //2번 반복하여 2번 출력
	{
		for (i = 0; i < n; i++)  //배열에 담긴 값출력
		{
			printf("%d\n", a[i]);
		}
	}
	return 0;
}
