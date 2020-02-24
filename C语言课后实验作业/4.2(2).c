#include <stdio.h>

int main()
{
	int x = 0, y = 0;

	printf("Input x:");
	scanf("%d", &x);
	if (x == 0) {
		y = 1;
	}else if ((x <= 5) && (x >= -5)) {
		y = x-1;
	}else if ((x <= 10) && (x > 5)) {
		y = x+5;
	}else {
		y = 100;
	}

	printf("y:%d\n", y);

	return (0);
}
