// 6.判断素数(书P81）

#include <stdio.h>

int main()
{
	int n, i;

	printf("Input n(n>3): ");
	scanf("%d", &n);
	for (i = 2; i <= n-1; i++)
	{
		if (n%i == 0) {
			break;
		}
	}

	if (i < n) {
		printf("%d is not a prime\n", n);
	}else{
		printf("%d is a prime\n", n);
	}

	return (0);
}
