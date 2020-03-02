// （14）输入一个100以内的正整数，将其分解质因数后输出。如输入60，输出60=2*2*3*5

#include <stdio.h>
int main()
{
	int i = 0, n = 0;

	printf("input n:");
	scanf("%d", &n);
	printf("%d=", n);

	for (i = 2; i < n;)
	{
		if (n%i == 0) {
			printf("%d*", i);
			n = n/i;
		}else {
			i++;
		}
	}
	printf("%d\n", n);

	return (0);
}
