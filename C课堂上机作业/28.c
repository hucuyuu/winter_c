//t28
#include <stdio.h>

int main()
{
	int i;
	double sum = 0.0;

	for (i = 1; i < 101; i++)
	{
		sum += 1.0/i;
		// printf("%lf\n", sum);
	}
	printf("%lf\n", sum);

	return (0);
}
