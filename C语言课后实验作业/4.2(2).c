#include <stdio.h>
#include <math.h>

int main()
{
	double x = 0, y = 0;

	printf("Input x:");
	scanf("%lf", &x);
	if (fabs(x) < 1e-6) {
		y = 1;
	}else if ((x < 5.000001) && (x > -5.000001)) {
		y = x-1;
	}else if ((x < 10.000001) && (x > 5.000000)) {
		y = x+5;
	}else {
		y = 100;
	}

	printf("y:%lf\n", y);

	return (0);
}
