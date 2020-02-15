// t6.1.7(1)

#include <stdio.h>

int main()
{
	int i = 0;
	int fi[20];

	fi[0] = 1;
	fi[1] = 1;

	for (i = 2; i < 20; i++)
	{
		fi[i] = fi[i-1] +fi[i-2];
		printf("Fibonacci(%d)=%d\n", i, fi[i]);
	}

	return (0);
}
