// 11.根号a的迭代公式（书P109）

#include <stdio.h>
#include <math.h>
double getsqrt(double a);

int main()
{
	double x[5] = { 1, 3, 5, 7, 9 }, xsqrt[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		xsqrt[i] = getsqrt(x[i]);
		printf("%11.9f\t%11.9f\t\n", xsqrt[i], sqrt(x[i]));
	}

	return (0);
}


double getsqrt(double a)
{
	double x1 = a, x2;

	while (1)
	{
		x2 = (x1+a/x1)/2;
		if (fabs(x1-x2) < 1e-6) {
			break;
		}
		x1 = x2;
	}

	return (x1);
}
