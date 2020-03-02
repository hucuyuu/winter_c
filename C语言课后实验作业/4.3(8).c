// （8）编写一个程序，完成加、减、乘、除运算。如输入2.5*4，则输出：2.5*4=10

#include <stdio.h>

int main()
{
	double i = 0, j = 0;
	char k = '0';

	scanf("%lf%c%lf", &i, &k, &j);

	switch (k)
	{
	case '+':
		printf("%lf+%lf=%lf\n", i, j, i+j);
		break;

	case '-':
		printf("%lf-%lf=%lf\n", i, j, i-j);
		break;

	case '*':
		printf("%lf*%lf=%lf\n", i, j, i*j);
		break;

	case '/':
		printf("%lf/%lf=%lf\n", i, j, i/j);
		break;
	}

	return (0);
}
