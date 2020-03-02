// （11）编写程序，实现从键盘输入一个正整数，输出该正整数和它的位数。
// 例如输入1234输出1234，4位 ；输入 123456输出123456，6位。

#include <stdio.h>

int main()
{
	int n = 0, cot = 0;

	printf("Input n:");
	scanf("%d", &n);
	printf("%d\n", n);

	while (n != 0)
	{
		n /= 10;
		cot++;
	}
	printf("cot:%d\n", cot);
}
