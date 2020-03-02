// （7）编写一个程序，输出九九乘法口诀表。

#include <stdio.h>

int main()
{
	int i = 0, j = 0;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%dx%d=%d\t", j, i, i*j);
		}
		printf("\n");
	}

	return (0);
}
