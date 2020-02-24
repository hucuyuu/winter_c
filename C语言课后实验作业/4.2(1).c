#include <stdio.h>

int main()
{
	int x = 0;
	int sgn = 0;

	printf("Input x:");
	scanf("%d", &x);
	sgn = x != 0 ? 1 : 0;
	printf("sgn:%d\n", sgn);

	return (0);
}
