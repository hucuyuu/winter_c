#include <stdio.h>

int main()
{
	int a = 0, b = 0, t = 0;

	scanf("%d %d", &a, &b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n", a, b);

	return (0);
}
