// 19.最大公约数

#include <stdio.h>
int lcm(int M, int N);

int main()
{
	printf("%d\n", lcm(24, 45));

	return (0);
}


int lcm(int M, int N)
{
	int t;
	int i = M;
	int j = N;

	while (N != 0)
	{
		t = M % N;
		M = N;
		N = t;
	}
	return (i*j/M);
}
