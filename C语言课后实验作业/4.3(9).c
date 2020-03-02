// （9）编写一个程序，求Fibonacci数列的前20项值并输出。
// Fibonacci数列的定义如下：Fib(0)=1,  Fib(1)=1,  Fib(n)=Fib(n-1) + Fib(n-2)。

#include <stdio.h>

int main()
{
	int n = 20;
	int a = 1;
	int b = 1;

	while (--n >= 0)
	{
		printf("%d \n", a);
		b = a + b;
		a = b - a;
	}
}
