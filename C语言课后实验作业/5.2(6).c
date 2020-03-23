//（6）采用二分法求解并返回方程“ ”在[a,b]内的一个近似根，允许误差 。
// ⑴ 编写递归函数double root(double a,double b)， 使用二分法求解方程的近似根。
// ⑵ 编写main函数，先判断[1,2]内是否有一个根，若有再调用root得到近似根并输出，若无根则输出区间内无根的信息。

#include <stdio.h>
#include <math.h>

double f(double x)
{
	return (x*x/4.0 -sin(x));
}


double root(double a, double b)
{
	if (fabs(a-b) < 1e-6) {
		return (a);
	}
	if (f(a)*f((a+b)/2.0) > 0) {
		return (root((a+b)/2.0, b));
	}
	if (f(a)*f((a+b)/2.0) < 0) {
		return (root(a, (a+b)/2.0));
	}
}


int main()
{
	if (f(1)*f(2) < 0) {
		printf("%lf", root(1, 2));
	}

	return (0);
}
