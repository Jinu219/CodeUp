#include <stdio.h>
int main()
{
	int a, b, i, m[105], k, l, j, temp;
	scanf("%d %d", &a, &b);
	for (i = 0; i < a; i++) {
		scanf("%d", &m[i]);
		k = i;
	}
	for (i = 0; i < a - 1; i++)
	{
		l = i;
		for (j = i + 1; j < a; j++)
		{
			if (m[l] > m[j])
			{
				l = j;
			}
		}
		temp = m[l];
		m[l] = m[i];
		m[i] = temp;
	}
	for (i = 0; i < k + 1; i++) {
		if (i%b == 0 && i != 0) {
			printf("\n");
		}
		printf("%d ", m[i]);
	}
}
