//t33
//selectSort bubbleSort

#include <stdio.h>

int a[100] = { 70, 93, 49, 64, 18, 78, 54, 95, 22, 66, 77, 26, 43, 9, 70, 48, 6, 35, 65, 73, 96, 79, 10, 82, 86, 61, 16, 88, 89, 33, 47, 68, 4, 54, 84, 9, 17, 60, 22, 39, 82, 58, 6, 99, 33, 15, 34, 38, 30, 7, 17, 34, 3, 76, 98, 74, 4, 70, 15, 29, 56, 43, 88, 58, 7, 91, 25, 15, 22, 68, 56, 12, 72, 65, 58, 57, 67, 80, 63, 6, 90, 68, 35, 89, 36, 88, 60, 17, 13, 25, 38, 95, 39, 50, 50, 66, 80, 97, 55, 27 };

void printShuzu(int *a, int n)//打印一个数组a[1]...a[n-1]
{
	int i = 0;

	for (i = 0; i < n; i++) //5个一行
	{
		printf("a[%d]:%d  \t", i, a[i]);
		if ((i+1)%5 == 0) {
			printf("\n");
		}
	}

	printf("\n");
}


void select_sort(int *a, int n)            // baidubaike
{
	int i, j, min, t;

	for (i = 0; i < n - 1; i++)
	{
		min = i;                // 查找最小值
		for (j = i + 1; j < n; j++)
		{
			if (a[min] > a[j]) {
				min = j; // 交换
			}
		}
		if (min != i) {
			t = a[min];
			a[min] = a[i];
			a[i] = t;
		}
	}
}


// int selectSort()
// {
//
// }
//
// int bubbleSort()
// {
//
// }

int main()
{
	printShuzu(a, 100);
	select_sort(a, 100);
	printShuzu(a, 100);

	return (0);
}
