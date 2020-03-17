// 设计一个函数，使用二分法求方程e^x+x=0在(-1,0)之间的根，注意调用数学库函
// 数前源程序中要包含头文件math.h，不然可能出现异常的结果。在main函数中输入
// x，在main函数中输出该方程的根。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <math.h>

double f(double x)
{
	return (pow(2.718282, x)+x);
}


int main()
{
	double l = -1, r = 0, mid = -0.5;

	while (fabs(f(mid)) > 1e-6)
	{
		if (f(mid) > 0) {
			r = mid;
			mid = (l+r)/2.0;
		}
		if (f(mid) < 0) {
			l = mid;
			mid = (l+r)/2.0;
		}
	}

	printf("%lf\n", mid);
}
