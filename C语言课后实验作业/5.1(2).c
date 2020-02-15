// t5.1(2)

#include <stdio.h>
#include <math.h>

int ifPrime(int k)
{
	int i = 0;

	for (i = 2; i <= sqrt(k); i++)
	{
		if (k%i == 0) {
			return (0);
		}
	}

	return (1);
}


int main()
{
	int i = 0;

	for (i = 100; i <= 200; i++)
	{
		if (ifPrime(i) == 1) {
			printf("%d ", i);
		}
	}

	return (0);
}
