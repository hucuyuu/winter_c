//（5）编写一个程序，根据以下公式求S的值（n取10）：


#include <stdio.h>

int main()
{
	int i = 0, j = 1;
	double sum = 0;

	for (i = 1; i < 11; i++)
	{
		sum += 1.0/j;
		// printf("%d\n", j);
		j = j*(i+1);
	}
	printf("%lf\n", sum);

	return (0);
}
