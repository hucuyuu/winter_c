// t27
// 请编程实现输出 2 到 100 中的所有素数，要求每行输出 5 个素数。

#include <stdio.h>
#include <math.h>
int ifPrime(int K)
{
	int i;

	for (i = 2; i <= sqrt(K); i++)
	{
		if (K % i == 0) {
			return (0); // 不是质数
		}
	}
	return (1);// 是质数
}


int main()
{
	int i = 2, t = 0;

	for (i = 2; i < 101; i++)
	{
		if (ifPrime(i) == 1) {
			printf("%d\t", i);
			t++;
			if (t % 5 == 0) {
				printf("\n");
			}
		}
	}

	return (0);
}
