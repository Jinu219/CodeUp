#include <stdio.h>

int main()
{
	char a;
	
	scanf("%c", &a);

	if (a == 'D') printf("slowly~");
	else if (a == 'C') printf("run!");
	else if (a == 'B') printf("good!!");
	else if (a == 'A') printf("best!!!");
	else printf("what?");
	return 0;
}
