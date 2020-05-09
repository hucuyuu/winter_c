// 51.
// 编写函数findcount，利用指针指向的二维数组，统计其中保存的矩阵里出
// 现的不同整数在该矩阵里各自出现的次数，将不同整数和统计结果保存在另
// 一个二维数组中，函数返回不同整数的个数。主程序中给矩阵赋值，调用函
// 数并输出结果。
// 【测试数据与运行结果】
//    测试数据：
//            8  8  8  7
//            6  8  5  7
//            6  8  8  7
//            8  8  7  7
//       输出：
//            8:8     7:5    6:2    5:1
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

#include <stdio.h>

int find(int t, int (*p)[2]) // return position of i in p
{
	int i = 0;

	for (i = 0; i < 16; i++)
	{
		if (p[i][0] == t) {
			return (i);
		}
	}
	for (i = 0; i < 16; i++)
	{
		if (p[i][1] == 0) {
			p[i][0] = t;
			return (i);
		}
	}
	return (-1);
}


int findcount(int (*p1)[4], int (*p2)[2]) // p1 is target array; p2 is data array
{
	int i = 0, j = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			p2[find(p1[i][j], p2)][1]++;
		}
	}
	for (i = 0; i < 16; i++)
	{
		if (p2[i][1] == 0) {
			return (i);
		}
	}

	return (-1);
}


int main()
{
	int i = 0, cot = 0;
	int a[4][4] = { { 8, 8, 8, 7 },
			{ 6, 8, 5, 7 },
			{ 6, 8, 8, 7 },
			{ 8, 8, 7, 7 }, };
	int data[16][2] = { 0 };

	cot = findcount(a, data);

	for (i = 0; i < cot; i++)
	{
		printf("%d:%d  ", data[i][0], data[i][1]);
	}
	printf("\ncot:%d\n", cot);

	return (0);
}
