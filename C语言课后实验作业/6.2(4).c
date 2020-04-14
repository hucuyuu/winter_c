// （4）对一个4×4的二维数组左下三角的全部元素（包含对角线上的元素）作如下变换：
// ⑴若该数是素数则用它的后继素数替换；
// ⑵ 若该数不是素数，则用0替换该数。
// 将变换后的数组及其数组左下三角的元素中的素数个数打印出来。

#include <stdio.h>
#include <math.h>

int ifPrime(int n)
{
	int i = 1;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0) {
			return (0);
		}
	}

	return (1);
}


int main()
{
	int i = 0, j = 0, k = 1, n = 0;
	int cot = 0;
	int a[4][4] = { { 3,  6,  4, 17 },
			{ 8,  5,  9, 10 },
			{ 9, 19,  7, 20 },
			{ 4, 14, 21, 23 } };

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < k; j++)
		{
			if (ifPrime(a[i][j]) == 0) {
				a[i][j] = 0;
			}else{
				n = a[i][j];
				n++;
				while (ifPrime(n) == 0)
				{
					n++;
				}
				a[i][j] = n;
				cot++;
			}
		}
		k++;
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("cont=%d\n", cot);

	return (0);
}
