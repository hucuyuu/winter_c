// 45.
// 程序改错:【下面程序功能】：两个有序数列的拼接。
// 下列程序中函数append的功能是将b指向的数组前blen个元素中存储的一个升序数列（简称b数列）
// 追加到a指向的数组前alen个元素中存储的一个降序数列（简称a数列）之后，
// 合并后的数列中前半部分是原a数列中的数据但改为按升序排列，后半部分是原b数列中的数据但改为按降序排列。
//【含有错误的源程序】
#include <stdio.h>
#include <conio.h>
void print(int a[], int n)
{
	int i;

	// for(i=0,i<n,i++)
	for (i = 0; i < n; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
}


void append(int a[], int alen, int b[], int blen)
{
	int i, j, t;

	i = 0;
	// j = alen;
	j = alen-1;
	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
	i = alen;
	j = blen-1;
	// while (j > 0)
	while (j >= 0)
	{
		a[i++] = b[j--];
	}
}


int main()
{
	int a[10] = { 13, 10, 5, 3, 1 }, b[] = { 4, 6, 9, 15 };

	// append(a[],5,b[],4);
	append(a, 5, b, 4);
	print(a, 9);
	getch();
	return (0);
}


// 【测试数据与运行结果】
//     测试数据：a数列为 13, 10, 5, 3, 1
//               b数列为 4, 6, 9, 15
//         输出：1  3  5  10  13  15  9  6  4
// 请改正并认真测试程序的正确性。将源代码以文本方式提交，不要直接提交文件。
