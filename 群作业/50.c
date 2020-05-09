// 50.
// 合并数组
// ⑴ 编写函数 int com(int *a,int *b,int *c)，实现将a和b两个已按升序
// 排列的数组（所有数组元素的值非０）合并成一个升序数组c，合并后的数
// 组中不包含两个数组中相同的数，并将两个数组中相同数的个数作为com函
// 数的返回值。
// ⑵ 编写main函数，声明三个整型数组，并对其中的两个数组用给出的测试
// 数据初始化（各数组长度利用宏定义规定）；调用函数com实现数组的合并
// ，且不包含两个数组中相同的数，合并后存入第三个数组中；将合并后的数
// 组及两个数组中相同的数的个数输出。
// 【测试数据】
// 数组a：3  6  7  18  23  33  35  43  48  78
// 数组b：2  7  13  21  33  37  48  50  58  67
// 【运行结果】
// 2   3   6  13  18  21  23  35  37  43  50  58  67  78
// count=3
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>
#define MAX    10

int backward(int *c, int n)
{
	int i = 0;

	for (i = 2*MAX-1; i > n; i--)
	{
		c[i] = c[i-1];
	}
	return (0);
}


int forward(int *c, int n)
{
	int i = 0;

	for (i = n; i < 2*MAX-1; i++)
	{
		c[i] = c[i+1];
	}
	return (0);
}


int com(int *a, int *b, int *c)
{
	int i = 0, j = 0;
	int cot = 0;

	for (i = 0; i < MAX; i++)
	{
		c[i] = a[i];
	}
	for (i = 0; i < MAX; i++)
	{
		for (j = i; j < 19; j++)
		{
			if (b[i] < c[0]) {
				backward(c, 0);
				c[0] = b[i];
				break;
			}else if (b[i] == c[j]) {
				forward(c, j);
				cot++;
				break;
			}else if ((b[i] > c[j]) && (b[i] < c[j+1])) {
				backward(c, j+1);
				c[j+1] = b[i];
				break;
			}else if (j == MAX+i-2*cot+1) {
				c[j-1] = b[i];
			}
		}
	}

	return (cot);
}


int main()
{
	int i = 0;
	int cot = 0;
	int a[MAX] = { 3, 6, 7, 18, 23, 33, 35, 43, 48, 78 };
	int b[MAX] = { 2, 7, 13, 21, 33, 37, 48, 50, 58, 67 };
	int c[2*MAX] = { -1 };

	cot = com(a, b, c);
	for (i = 0; i < 2*(MAX-cot); i++)
	{
		printf("%-5d", c[i]);
	}
	printf("\ncount=%d\n", cot);

	return (0);
}
