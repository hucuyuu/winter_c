//t31
//factorial

//1!+2!+...+n!

#include <stdio.h>

int factorial(int n)
{
	int i, k = 1;

	if (n == 1) {
		return (1);
	}

	for (i = 2; i <= n; i++)
	{
		k *= i;
	}

	return (k);
}


int main()
{
	int sum = 0, i = 1, n = 0;

	printf("1!+2!+...+n!\nInput n:");

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		sum += factorial(i);
	}

	printf("%d\n", sum);

	return (0);
}
