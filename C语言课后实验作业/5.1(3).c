// t5.1(3)

#include <stdio.h>
#include <math.h>

double f(double x) //代求函数 f(x)=0
{
	return (x*x*x*x*x+5*x*x*x*x+8*x*x-20);
}


double iteration(double a, double b) // 返回 f(x)=0 在 [a,b] 区间的根,且必须在 [a,b] 单调
{
	double x = 0;

	while (fabs(f(x)) > 0.000001)
	{
		x = a-f(a)*(b-a)/(f(b)-f(a));   // 截取弦与x轴公共点
		// printf("x:%lf a:%lf b:%lf f(x):%lf\n", x, a, b, f(x));  // debug代码
		if (f(x) < 0) {                 // 更新逼近区间
			a = x;
		}
		if (f(x) > 0) {  // 同上
			b = x;
		}
	}
	return (x);
}


int main()
{
	printf("Ans:%lf\n", iteration(0, 10.0));
}
