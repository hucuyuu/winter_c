//t30
//最小公倍数 = M * N / gcd(M, N)
//gcd(M, N) = gcd(N, M % N)
#include <stdio.h>

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


int main()
{
	int m = 24, n = 6;

	printf("%d\n", m * n / gcd(m, n));

	return (0);
}
