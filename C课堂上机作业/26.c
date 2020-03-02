// t26
// 请编程实现从键盘输入 1 个整数存放在 K 中，
// 判断这个整数是否为素数，输出结果

#include <stdio.h>
#include <math.h>

int main()
{
	int K;
	int i = 0, ifPrime = 1;

	printf("input K:");
	scanf("%d", &K);



	if (K <= 1) {
		printf("input error\n");
		return (-1);
	}

	for (i = 2; i <= sqrt(K); i++)
	{
		if (K % i == 0) {
			// printf("%d\n", i);
			ifPrime = 0; // 不是质数
		}
	}

	if (ifPrime == 0) {
		printf("%d is NOT prime.\n", K);
	}else{
		printf("%d is prime.\n", K);
	}

	return (0);
}
