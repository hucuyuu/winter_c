// 编写一个程序，用泰勒级数sin(x) ，计算sin(x)的值。
// 要求最后一项的绝对值小于10-5，并统计出此时累计了多少项。

#include <stdio.h>
#include <math.h>

int main()
{
	int i = 1;
	int fenmu = 1;
	int cot = 0;
	double x = 0;
	double tmp = 0;
	double sum = 0;

	printf("Input x:");
	scanf("%lf", &x);
	do
	{
		tmp = pow(x, i)*pow(-1, i/2)/fenmu;
		sum = sum+tmp;
		fenmu = fenmu*(i+1)*(i+2);
		i = i+2;
		cot++;
		printf("%d\n", cot);
	} while (fabs(tmp) > 1e-5);

	printf("%lf\n", tmp);
	printf("sin(%lf):%lf\ncot:%d\n", x, sum, cot);

	return (0);
}
