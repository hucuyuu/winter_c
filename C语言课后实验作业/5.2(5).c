//（5）整数次幂xy的求解。
// ⑴ 编写递归函数double power(double x,int y) ，计算并返回 的值。
// ⑵ 编写main函数，键盘输入x,y，调用power函数，输出结果。
#include <stdio.h>
double power(double x, int y)
{
	if (y == 0) {
		return (1);
	}
	return (x*power(x, y-1));
}


int main()
{
	double x = 0;
	int y = 0;

	printf("Input x:");
	scanf("%lf", &x);
	printf("Input y:");
	scanf("%d", &y);

	printf("%lf \n", power(x, y));

	return (0);
}
