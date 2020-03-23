// （1）编写1到1000累加的递归函数，在main函数中调用这个函数并输出结果。

#include <stdio.h>

int add(int n)
{
	if (n == 1) {
		return (1);
	}
	return (n+add(n-1));
}


int main()
{
	int n = 100;

	printf("%d\n", add(100));

	return (0);
}
