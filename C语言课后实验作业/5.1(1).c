// t5.1.(1)
// gcd(m,n) = gcd (n, m%n)

#include <stdio.h>

int gcd(int m, int n)
{
	int t;

	while (n != 0)
	{
		t = m % n;
		m = n;
		n = t;
	}

	return (m);
}


int main()
{
	printf("%d\n", gcd(24, 52));

	return (0);
}
