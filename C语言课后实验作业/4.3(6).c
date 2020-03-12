// 编写一个程序，用泰勒级数sin(x) ，计算sin(x)的值。
// 要求最后一项的绝对值小于10-5，并统计出此时累计了多少项。
//
// 改造实验4.3第(6)小题：设计函数mysin，用泰勒级数计算sin(x)的值，
// 要求最后一项的绝对值小于10-5。另外要求设计一个求正整数n!的函数fact，
// 供mysin函数调用。在main函数中输入x，在main函数中输出数学函数sin(x)的值和泰勒级数mysin(x)的值。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#include <math.h>

int cot = 0;

double mysin(double num)
{
	int i = 1;
	int fenmu = 1;

	double tmp = 0;
	double sum = 0;

	do
	{
		tmp = pow(num, i)*pow(-1, i/2)/fenmu;
		sum = sum+tmp;
		fenmu = fenmu*(i+1)*(i+2);
		i = i+2;
		cot++;
		printf("%d  ", cot);
		printf("%lf  ", tmp);
		printf("%lf\n", sum);
	} while (fabs(tmp) > 1e-5);

	return (sum);
}


int main()
{
	double x = 0;

	printf("Input x:");
	scanf("%lf", &x);
	printf("sin(%.5lf)=%.5lf\n", x, mysin(x));
	printf("cot:%d\n", cot);
	return (0);
}
