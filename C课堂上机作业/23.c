// 23.	请编程实现从键盘输入3个数分别存放在A 、B和C中，输出这3个数的最小数。
#include <stdio.h>

int main()
{
	int a, b, c, min;

	scanf("%d %d %d", &a, &b, &c);
	min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}

	return (0);
}
