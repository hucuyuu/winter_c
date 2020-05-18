// 61.
// 编程题
// 模拟一个简单的计算器，利用函数指针作为函数参数，对两个整数计算“最大公约数”、
// “最小公倍数”两种运算的一种，通过主程序中输入两个整数和数字1-2分别对应
// “最大公约数”、“最小公倍数”运算，在主程序输出计算结果。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>

int gcd(int a, int b)
{
	int temp;

	while (b)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}


int lcm(int a, int b)
{
	return (a*b/gcd(a, b));
}


int main()
{
	int (*p[2])(int, int) = { gcd, lcm };
	int m, n, i;

	printf("please input 2 numbers:");
	scanf("%d%d", &m, &n);
	printf("please input 0-1 to gcd or lcm:");
	scanf("%d", &i);

	printf("the result is:%d\n", (*p[i])(m, n));

	return (0);
}
