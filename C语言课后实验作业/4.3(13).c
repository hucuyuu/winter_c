//（13）编程找出1000之内的所有完数。所谓完数是指一个数与其除本身以外所有因子之和相等。
// 例如6除本身以外的因子有1、2、3，而6=1+2+3，所以6是一个完数。
// 6 28 496

#include <stdio.h>

int main()
{
	int i = 0, j = 0, sum = 0;

	for (i = 1; i <= 1000; i++)
	{
		for (j = 1; j < i; j++)
		{
			if (i%j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			printf("%d\n", i);
		}
		sum = 0;
	}

	return (0);
}
