// （2）编写求整数n阶乘的递归函数，在main函数中调用这个函数并输出结果。

#include <stdio.h>

int fun(int n)
{
	if (n == 1) {
		return (1);
	}
	return (n*fun(n-1));
}


int main()
{
	int n = 0;

	printf("Input n:");
	scanf("%d", &n);
	printf("%d!=%d\n", n, fun(n));

	return (0);
}
