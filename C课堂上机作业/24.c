// 24.	请编程实现从键盘输入方程的3个系数，输出一元二次方程的根（设a≠0）。

#include <stdio.h>
#include <math.h>

int main()
{
	double a = 0.0, b = 0.0, c = 0.0;
	double delta = 0.0, x1 = 0.0, x2 = 0.0;

	delta = b*b - 4*a*c;

	if (delta < 0) {
		printf("wu jie\n");
	}else if (fabs(delta) < 1e-6) {
		x1 = -b/(2.0*a);
		printf("x1=x2=%f\n", x1);
	}else{
		x1 = (-b+sqrt(delta))/(2.0*a);
		x2 = (-b-sqrt(delta))/(2.0*a);
		printf("x1=%lf,x2=%lf\n", x1, x2);
	}

	return (0);
}
