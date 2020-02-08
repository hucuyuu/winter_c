//t29
//Theory: gcd(M, N) = gcd(N, M % N)

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
	printf("%d\n", gcd(24, 45));

	return (0);
}
