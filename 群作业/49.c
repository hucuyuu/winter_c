// 49.
// 改造课堂上机作业第36题:数组a有10个元素，用a[0]、a[1]、……、a[9]表
// 示，其中存放了10个整数（通过一般初始化赋值），请利用指向数组a的指
// 针实现倒置数组a中的元素，保存并输出倒置后的数组。
// 请认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。

// #include <stdio.h>
//
// void swap(int *p1, int *p2)
// {
// 	int temp;
//
// 	temp = *p1;
// 	*p1 = *p2;
// 	*p2 = temp;
// }
//
//
// int main()
// {
// 	int i = 0;
// 	int a[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
// 	// for (i = 0; i < 5; i++)
// 	// {
// 	// 	swap(&a[i], &a[9-i]);
// 	// }
// 	//
// 	// for (i = 0; i < 10; i++)
// 	// {
// 	// 	printf("%d\n", a[i]);
// 	// }
// 	int *pa = a;
//
// 	printf("%d\n", *pa);
// 	pa++;
// 	pa++;
// 	printf("%d\n", *pa);
// }
// #include <stdio.h>
// int main()
// {
// 	int i, j, a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } }, *p = NULL;
//
// 	p = &a[0][0];
// 	for (i = 0; i < 2; i++)
// 	{
// 		for (j = 0; j < 3; j++)
// 		{
// 			printf(" a[%d][%d]=%d ", i, j, *(p+i*3+j));
// 		}
// 		printf("\n");
// 	}
// 	return (0);
// }
#include <stdio.h>

void output2(int *x, int m, int n)
{
	int i, j;

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]=%d\n", i, j, x[i][j]);
		}
	}
}


int main()
{
	int i, j;
	int a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

	int (*pa)[3];

	pa = a;

	// for (i = 0; i < 2; i++)
	// {
	// 	for (j = 0; j < 3; j++)
	// 	{
	// 		printf(" a[%d][%d]=%d ", i, j, pa[i][j]);
	// 	}
	// 	printf("\n");
	// }

	output2(pa, 2, 3);
	return (0);
}
