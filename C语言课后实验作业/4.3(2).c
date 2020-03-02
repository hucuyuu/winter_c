//（2）编写一个程序，计算a+aa+aaa+…+aa…a (n个a)的值，n和a的值由键盘输入。

#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0;
	int a = 0;
	int i = 0, j = 1, sum = 0;

	printf("input a:");
	scanf("%d", &a);
	printf("input n:");
	scanf("%d", &n);

	for ( ; i < n; i++, j *= 10)
	{
		sum += (n-i)*a*j;
	}

	printf("%d\n", sum);

	return (0);
}
