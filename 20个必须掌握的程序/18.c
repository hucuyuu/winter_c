// 18.最小公倍数

#include <stdio.h>
int gcd(int M, int N);

int main()
{
	printf("%d\n", gcd(24, 45));

	return (0);
}


int gcd(int M, int N)
{
	int t;

	while (N != 0)
	{
		t = M % N;
		M = N;
		N = t;
	}
	return (M);
}
