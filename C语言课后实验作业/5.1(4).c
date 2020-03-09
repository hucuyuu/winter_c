//t5.1(4)
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
	int a = 0, b = 0;

	printf("Input two numbers:");
	scanf("%d %d", &a, &b);
	printf("%d\n", a*b/gcd(a, b));

	return (0);
}
