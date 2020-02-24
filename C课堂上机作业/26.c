// t26
// 请编程实现从键盘输入 1 个整数存放在 K 中，
// 判断这个整数是否为素数，输出结果

#include <stdio.h>
#include <math.h>

int ifPrime(int K)
{
	int i;

	if (K == 1) {
		return (0);
	}

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
	int K;

	printf("input K:");
	scanf("%d", &K);

	if (ifPrime(K) == 0) {
		printf("%d is NOT prime.\n", K);
	}else{
		printf("%d is prime.\n", K);
	}

	return (0);
}
