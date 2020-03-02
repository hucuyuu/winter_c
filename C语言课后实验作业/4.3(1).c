// （1）编写一个程序，输出100以内能被3整除且个位数为6的所有整数。

#include <stdio.h>

int main()
{
	int i = 0;

	for ( ; i <= 100; i++)
	{
		if ((i%3 == 0) && (i%10 == 6)) {
			printf("%d\n", i);
		}
	}

	return (0);
}
